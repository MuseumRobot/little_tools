#ifndef STAR_MARK_H
#define STAR_MARK_H

#include <QtGui/QMainWindow>
#include "ui_star_mark.h"
#include "dlgnewstar.h"
#include "DataManager.h"
#include "star.h"
#include <GBK.h>
class Star_mark : public QMainWindow
{
	Q_OBJECT

public:
	Star_mark(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Star_mark();

private:
	Ui::Star_markClass ui;
	private slots:
		int onAdd();
		int onRemove();
		int onFilterChanged();

private:
	void display(Star& record);
	void display(StarList& records);
	DataManager m_dataSource;
	Star m_star;
};

#endif // STAR_MARK_H
