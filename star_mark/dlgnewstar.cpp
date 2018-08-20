#include "dlgnewstar.h"

DlgNewStar::DlgNewStar(Star* result,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_result=result;
	connect(ui.m_ok, SIGNAL(clicked()), this, SLOT(onBtnOK()));
	connect(ui.m_cancel, SIGNAL(clicked()), this, SLOT(onBtnCancel()));
	// 正则表达式: 限制输入数字
	QValidator *v1 = new QRegExpValidator(QRegExp("^\\d{6}$"), this);
	ui.m_ctl_id->setValidator(v1);
}

DlgNewStar::~DlgNewStar()
{

}
int DlgNewStar::onBtnOK(){
	// 取得值
	

	
	string text = GBK::FromUnicode(ui.m_ctl_id->text());
	strcpy(m_result->name, text.c_str());

	m_result->star_angle = ui.m_ctl_angle->text().toInt();


	

	m_result->m_star_x = ui.m_ctl_x->text().toInt();
	m_result->m_star_y = ui.m_ctl_y->text().toInt();
	// 关闭对话框
	accept(); 
	return 0;
}
int DlgNewStar::onBtnCancel(){
	reject();
	return 0;
}