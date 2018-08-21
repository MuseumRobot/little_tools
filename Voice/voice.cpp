#include "voice.h"

Voice::Voice(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.addYuliao, SIGNAL(clicked()), this, SLOT(onAdd()));
	connect(ui.removeYuliao, SIGNAL(clicked()), this, SLOT(onRemove()));
	connect(ui.m_ctlFilter, SIGNAL(returnPressed()), this, SLOT(onFilterChanged()));
	connect(ui.treeWidget,SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)),this,SLOT(onDoubleClickedRecord(QTreeWidgetItem*, int)));

	m_dataSource.loadYuliao();// ����
	onFilterChanged();// ��ʾ�����б�
}

Voice::~Voice()
{

}
int Voice::onAdd(){

	Yuliao result;
	DlgNewVoice dlg(&result, this);
	if(QDialog::Accepted == dlg.exec())
	{
		// ����
		m_dataSource.addYuliao(result);
		m_dataSource.saveYuliao();

		// ��ʾ������
		display(result);
	}
	return 0;
}
int Voice::onRemove()
{
	QTreeWidgetItem* item = ui.treeWidget->currentItem();
	if(!item) return 0; // û��ѡ����

	// ȡ���к�
	int id = item->data(0, Qt::UserRole).toInt();

	// ��DataSource��ɾ����¼
	m_dataSource.removeYuliao(id);
	m_dataSource.saveYuliao();

	// �ӽ�����ɾ��������ʾ
	int index = ui.treeWidget->indexOfTopLevelItem(item);
	QTreeWidgetItem* which = ui.treeWidget->takeTopLevelItem(index);
	delete which;

	return 0;
}

// ����
int Voice::onFilterChanged()
{	
	string filter = GBK::FromUnicode(ui.m_ctlFilter->text().trimmed());

	if(filter.length() > 0)
	{
		// ����ƥ��
		YuliaoList results;
		m_dataSource.matchYuliao(filter.c_str(), results);

		// ��ʾƥ��ļ�¼
		ui.treeWidget->clear();
		display(results);
	}
	else
	{
		// ��ʾȫ��
		ui.treeWidget->clear();
		display(m_dataSource.listYuliao());
	}	

	return 0;
}

// ��ʾһ����¼
void Voice::display(Yuliao& record)
{
	// ��������
	QTreeWidgetItem* item = new QTreeWidgetItem(ui.treeWidget);
	item->setText(0, QString("%1").arg(record.id) );
	item->setText(1, GBK::ToUnicode(record.name));
	item->setText(2, GBK::ToUnicode(record.short_content));
	item->setText(3, GBK::ToUnicode(record.content));

	// �����к�
	item->setData(0, Qt::UserRole, record.id);
}

// ��ʾ������¼
void Voice::display(YuliaoList& records)
{
	for(YuliaoList::iterator iter = records.begin();
		iter != records.end(); iter ++)
	{
		Yuliao& record = *iter;

		display(record);
	}
}