#ifndef TASK_POINT_H
#define TASK_POINT_H
#include <QWidget>
#include <QtGui/QMainWindow>
#include "ui_task_point.h"
#include "Point_ziwei.h"
#include "DataManager.h"
#include "dlgnewpoint.h"


class Task_point : public QMainWindow
{
	Q_OBJECT

public:
	Task_point(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Task_point();
	

private:
	Ui::Task_pointClass ui;
	DataManager m_dataSource;
private slots:
	int onAdd();
	int onRemove();
	int onFilterChanged();

private:
	void display(Point_ziwei& record);
	void display(PointList& records);
	
	Point_ziwei m_point;
	//PipeDataType xiahua;
}
;


#endif // TASK_POINT_H
