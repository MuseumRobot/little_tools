#include "dlgnewvoice.h"

DlgNewVoice::DlgNewVoice(Yuliao* result,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_result=result;
	connect(ui.m_ok, SIGNAL(clicked()), this, SLOT(onBtnOK()));
	connect(ui.m_cancel, SIGNAL(clicked()), this, SLOT(onBtnCancel()));
	// 正则表达式: 限制输入数字

}

DlgNewVoice::~DlgNewVoice()
{

}
int DlgNewVoice::onBtnOK(){
	// 取得值
	

	string text = GBK::FromUnicode(ui.m_ctlName->text());
	strcpy(m_result->name, text.c_str());


	 text = GBK::FromUnicode(ui.m_ctl_short->text());
	strcpy(m_result->short_content, text.c_str());
	 text = GBK::FromUnicode(ui.m_ctl_content->toPlainText());
	strcpy(m_result->content, text.c_str());
	// 关闭对话框
	accept(); 
	return 0;
}
int DlgNewVoice::onBtnCancel(){
	reject();
	return 0;
}