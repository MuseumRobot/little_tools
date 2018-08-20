#include "star_mark.h"

Star_mark::Star_mark(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.m_add, SIGNAL(clicked()), this, SLOT(onAdd()));
	connect(ui.m_remove, SIGNAL(clicked()), this, SLOT(onRemove()));
	connect(ui.m_ctlFilter, SIGNAL(returnPressed()), this, SLOT(onFilterChanged()));
	connect(ui.treeWidget,SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)),this,SLOT(onDoubleClickedRecord(QTreeWidgetItem*, int)));

	m_dataSource.loadStar();// 加载
	onFilterChanged();// 显示数据列表

}

Star_mark::~Star_mark()
{

}
int Star_mark::onAdd(){

	Star result;
	DlgNewStar dlg(&result, this);
	if(QDialog::Accepted == dlg.exec())
	{
		// 保存
		m_dataSource.addStar(result);
		m_dataSource.saveStar();

		// 显示到界面
		display(result);
	}
	return 0;
}
int Star_mark::onRemove()
{
	QTreeWidgetItem* item = ui.treeWidget->currentItem();
	if(!item) return 0; // 没有选中项

	// 取得行号
	int name = item->data(0, Qt::UserRole).toInt();

	// 从DataSource中删除记录
	m_dataSource.removeStar(name);
	m_dataSource.saveStar();

	// 从界面中删除该条显示
	int index = ui.treeWidget->indexOfTopLevelItem(item);
	QTreeWidgetItem* which = ui.treeWidget->takeTopLevelItem(index);
	delete which;

	return 0;
}

// 过滤
int Star_mark::onFilterChanged()
{	
	string filter = GBK::FromUnicode(ui.m_ctlFilter->text().trimmed());

	if(filter.length() > 0)
	{
		// 查找匹配
		StarList results;
		m_dataSource.matchStar(filter.c_str(),results);

		// 显示匹配的记录
		ui.treeWidget->clear();
		display(results);
	}
	else
	{
		// 显示全部
		ui.treeWidget->clear();
		display(m_dataSource.listStar());
	}	

	return 0;
}

// 显示一条记录
void Star_mark::display(Star& record)
{
	// 设置数据
	QTreeWidgetItem* item = new QTreeWidgetItem(ui.treeWidget);
	item->setText(0, QString("%1").arg(record.order) );
	item->setText(1, GBK::ToUnicode(record.name));
	item->setText(2, QString("%1").arg(record.star_angle));
	
	item->setText(3, QString("%1").arg(record.m_star_x));
	item->setText(4, QString("%1").arg(record.m_star_y));

	// 设置行号
	item->setData(0, Qt::UserRole, record.order);
}

// 显示多条记录
void Star_mark::display(StarList& records)
{
	for(StarList::iterator iter = records.begin();
		iter != records.end(); iter ++)
	{
		Star& record = *iter;

		display(record);
	}
}