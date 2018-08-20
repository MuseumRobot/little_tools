#include "star_mark.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Star_mark w;
	w.show();
	return a.exec();
}
