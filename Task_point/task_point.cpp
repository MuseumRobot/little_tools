#include "task_point.h"

Task_point::Task_point(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	
	connect(ui.addPoint, SIGNAL(clicked()), this, SLOT(onAdd()));
	connect(ui.removePoint, SIGNAL(clicked()), this, SLOT(onRemove()));
	connect(ui.m_ctlFilter, SIGNAL(returnPressed()), this, SLOT(onFilterChanged()));
	connect(ui.treeWidget,SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)),this,SLOT(onDoubleClickedRecord(QTreeWidgetItem*, int)));

	m_dataSource.loadPoint();// 加载
	onFilterChanged();// 显示数据列表


	//设置表格列宽

}

Task_point::~Task_point()
{

}
int Task_point::onAdd(){

	Point_ziwei result;
	DlgNewPoint dlg(&result, this);
	if(QDialog::Accepted == dlg.exec())
	{
		// 保存
		m_dataSource.addPoint(result);
		m_dataSource.savePoint();

		// 显示到界面
		display(result);
	}
	return 0;
}
int Task_point::onRemove()
{
	QTreeWidgetItem* item = ui.treeWidget->currentItem();
	if(!item) return 0; // 没有选中项

	// 取得行号
	int id = item->data(0, Qt::UserRole).toInt();

	// 从DataSource中删除记录
	m_dataSource.removePoint(id);
	m_dataSource.savePoint();

	// 从界面中删除该条显示
	int index = ui.treeWidget->indexOfTopLevelItem(item);
	QTreeWidgetItem* which = ui.treeWidget->takeTopLevelItem(index);
	delete which;

	return 0;
}

// 过滤
int Task_point::onFilterChanged()
{	
	string filter = GBK::FromUnicode(ui.m_ctlFilter->text().trimmed());

	if(filter.length() > 0)
	{
		// 查找匹配
		PointList results;
		m_dataSource.matchPoint(filter.c_str(), results);

		// 显示匹配的记录
		ui.treeWidget->clear();
		display(results);
	}
	else
	{
		// 显示全部
		ui.treeWidget->clear();
		display(m_dataSource.listPoint());
	}	

	return 0;
}

// 显示一条记录
void Task_point::display(Point_ziwei& record)
{
	// 设置数据
	QTreeWidgetItem* item = new QTreeWidgetItem(ui.treeWidget);
	item->setText(0, QString("%1").arg(record.id) );
	item->setText(1, GBK::ToUnicode(record.name));
	item->setText(2, QString("%1").arg(record.point_kind));
	item->setText(3, QString("%1").arg(record.content_num));
	item->setText(4, QString("%1").arg(record.m_destnation_x));
	item->setText(5, QString("%1").arg(record.m_destnation_y));

	// 设置行号
	item->setData(0, Qt::UserRole, record.id);
}

// 显示多条记录
void Task_point::display(PointList& records)
{
	for(PointList::iterator iter = records.begin();
		iter != records.end(); iter ++)
	{
		Point_ziwei& record = *iter;

		display(record);
	}
}