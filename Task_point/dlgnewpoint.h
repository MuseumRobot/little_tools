#ifndef DLGNEWPOINT_H
#define DLGNEWPOINT_H
#include "Point_ziwei.h"
#include <QDialog>
#include "ui_dlgnewpoint.h"
#include "GBK.h"
class DlgNewPoint : public QDialog
{
	Q_OBJECT

public:
	DlgNewPoint(Point_ziwei* result,QWidget *parent = 0);
	~DlgNewPoint();

private:
	Ui::DlgNewPoint ui;
	Point_ziwei* m_result;
private slots:
	int onBtnOK();

	int onBtnCancel();


};


#endif // DLGNEWPOINT_H
