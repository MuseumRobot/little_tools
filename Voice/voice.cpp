#include "voice.h"

Voice::Voice(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.addYuliao, SIGNAL(clicked()), this, SLOT(onAdd()));
	connect(ui.removeYuliao, SIGNAL(clicked()), this, SLOT(onRemove()));
	connect(ui.m_ctlFilter, SIGNAL(returnPressed()), this, SLOT(onFilterChanged()));
	connect(ui.treeWidget,SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)),this,SLOT(onDoubleClickedRecord(QTreeWidgetItem*, int)));

	m_dataSource.loadYuliao();// 加载
	onFilterChanged();// 显示数据列表
}

Voice::~Voice()
{

}
int Voice::onAdd(){

	Yuliao result;
	DlgNewVoice dlg(&result, this);
	if(QDialog::Accepted == dlg.exec())
	{
		// 保存
		m_dataSource.addYuliao(result);
		m_dataSource.saveYuliao();

		// 显示到界面
		display(result);
	}
	return 0;
}
int Voice::onRemove()
{
	QTreeWidgetItem* item = ui.treeWidget->currentItem();
	if(!item) return 0; // 没有选中项

	// 取得行号
	int id = item->data(0, Qt::UserRole).toInt();

	// 从DataSource中删除记录
	m_dataSource.removeYuliao(id);
	m_dataSource.saveYuliao();

	// 从界面中删除该条显示
	int index = ui.treeWidget->indexOfTopLevelItem(item);
	QTreeWidgetItem* which = ui.treeWidget->takeTopLevelItem(index);
	delete which;

	return 0;
}

// 过滤
int Voice::onFilterChanged()
{	
	string filter = GBK::FromUnicode(ui.m_ctlFilter->text().trimmed());

	if(filter.length() > 0)
	{
		// 查找匹配
		YuliaoList results;
		m_dataSource.matchYuliao(filter.c_str(), results);

		// 显示匹配的记录
		ui.treeWidget->clear();
		display(results);
	}
	else
	{
		// 显示全部
		ui.treeWidget->clear();
		display(m_dataSource.listYuliao());
	}	

	return 0;
}

// 显示一条记录
void Voice::display(Yuliao& record)
{
	// 设置数据
	QTreeWidgetItem* item = new QTreeWidgetItem(ui.treeWidget);
	item->setText(0, QString("%1").arg(record.id) );
	item->setText(1, GBK::ToUnicode(record.name));
	item->setText(2, GBK::ToUnicode(record.short_content));
	item->setText(3, GBK::ToUnicode(record.content));

	// 设置行号
	item->setData(0, Qt::UserRole, record.id);
}

// 显示多条记录
void Voice::display(YuliaoList& records)
{
	for(YuliaoList::iterator iter = records.begin();
		iter != records.end(); iter ++)
	{
		Yuliao& record = *iter;

		display(record);
	}
}