#include "task_point.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Task_point w;
	w.show();
	return a.exec();
}
