#ifndef DLGNEWSTAR_H
#define DLGNEWSTAR_H

#include <QWidget>
#include "ui_dlgnewstar.h"
#include "Star.h"
#include <QDialog>
#include "GBK.h"
#include <QDialog>
class DlgNewStar : public QDialog
{
	Q_OBJECT

public:
	DlgNewStar(Star* result,QWidget *parent = 0);
	~DlgNewStar();

private:
	Ui::dlgNewStar ui;
	Star* m_result;
private slots:
		int onBtnOK();

		int onBtnCancel();
};

#endif // DLGNEWSTAR_H
