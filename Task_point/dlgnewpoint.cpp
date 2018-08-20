#include "dlgnewpoint.h"

DlgNewPoint::DlgNewPoint(Point_ziwei* result,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_result=result;
	connect(ui.m_ok, SIGNAL(clicked()), this, SLOT(onBtnOK()));
	connect(ui.m_cancel, SIGNAL(clicked()), this, SLOT(onBtnCancel()));
	// 正则表达式: 限制输入数字
	QValidator *v1 = new QRegExpValidator(QRegExp("^\\d{6}$"), this);
	ui.m_ctlId->setValidator(v1);
}

DlgNewPoint::~DlgNewPoint()
{

}
int DlgNewPoint::onBtnOK(){
	// 取得值
	m_result->name = ui.m_ctlId->text().toInt();

	string text = GBK::FromUnicode(ui.m_ctlName->text());
	strcpy(m_result->name, text.c_str());

	 m_result->point_kind = ui.m_ctlKind->text().toInt();
	
	
	 m_result->content_num = ui.m_ctlCon_num->text().toInt();

	 m_result->m_destnation_x = ui.m_ctldestination_x->text().toInt();
	 m_result->m_destnation_y = ui.m_ctldestination_y->text().toInt();
	// 关闭对话框
	accept(); 
	return 0;
}
int DlgNewPoint::onBtnCancel(){
	reject();
	return 0;
}