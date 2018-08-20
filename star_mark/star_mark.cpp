#include "star_mark.h"

Star_mark::Star_mark(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.m_add, SIGNAL(clicked()), this, SLOT(onAdd()));
	connect(ui.m_remove, SIGNAL(clicked()), this, SLOT(onRemove()));
	connect(ui.m_ctlFilter, SIGNAL(returnPressed()), this, SLOT(onFilterChanged()));
	connect(ui.treeWidget,SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)),this,SLOT(onDoubleClickedRecord(QTreeWidgetItem*, int)));

	m_dataSource.loadStar();// ����
	onFilterChanged();// ��ʾ�����б�

}

Star_mark::~Star_mark()
{

}
int Star_mark::onAdd(){

	Star result;
	DlgNewStar dlg(&result, this);
	if(QDialog::Accepted == dlg.exec())
	{
		// ����
		m_dataSource.addStar(result);
		m_dataSource.saveStar();

		// ��ʾ������
		display(result);
	}
	return 0;
}
int Star_mark::onRemove()
{
	QTreeWidgetItem* item = ui.treeWidget->currentItem();
	if(!item) return 0; // û��ѡ����

	// ȡ���к�
	int name = item->data(0, Qt::UserRole).toInt();

	// ��DataSource��ɾ����¼
	m_dataSource.removeStar(name);
	m_dataSource.saveStar();

	// �ӽ�����ɾ��������ʾ
	int index = ui.treeWidget->indexOfTopLevelItem(item);
	QTreeWidgetItem* which = ui.treeWidget->takeTopLevelItem(index);
	delete which;

	return 0;
}

// ����
int Star_mark::onFilterChanged()
{	
	string filter = GBK::FromUnicode(ui.m_ctlFilter->text().trimmed());

	if(filter.length() > 0)
	{
		// ����ƥ��
		StarList results;
		m_dataSource.matchStar(filter.c_str(),results);

		// ��ʾƥ��ļ�¼
		ui.treeWidget->clear();
		display(results);
	}
	else
	{
		// ��ʾȫ��
		ui.treeWidget->clear();
		display(m_dataSource.listStar());
	}	

	return 0;
}

// ��ʾһ����¼
void Star_mark::display(Star& record)
{
	// ��������
	QTreeWidgetItem* item = new QTreeWidgetItem(ui.treeWidget);
	item->setText(0, QString("%1").arg(record.order) );
	item->setText(1, GBK::ToUnicode(record.name));
	item->setText(2, QString("%1").arg(record.star_angle));
	
	item->setText(3, QString("%1").arg(record.m_star_x));
	item->setText(4, QString("%1").arg(record.m_star_y));

	// �����к�
	item->setData(0, Qt::UserRole, record.order);
}

// ��ʾ������¼
void Star_mark::display(StarList& records)
{
	for(StarList::iterator iter = records.begin();
		iter != records.end(); iter ++)
	{
		Star& record = *iter;

		display(record);
	}
}