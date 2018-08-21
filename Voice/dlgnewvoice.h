#ifndef DLGNEWVOICE_H
#define DLGNEWVOICE_H

#include "ui_dlgnewvoice.h"
#include "yuliao.h"
#include <QDialog>
#include "GBK.h"
class DlgNewVoice : public QDialog
{
	Q_OBJECT

public:
	DlgNewVoice(Yuliao* result,QWidget *parent = 0);
	~DlgNewVoice();

private:
	Ui::DlgNewVoice ui;
	Yuliao* m_result;
private slots:
		int onBtnOK();

		int onBtnCancel();
};

#endif // DLGNEWVOICE_H
