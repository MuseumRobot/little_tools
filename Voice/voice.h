#ifndef VOICE_H
#define VOICE_H

#include <QtGui/QMainWindow>
#include "ui_voice.h"
#include "yuliao.h"
#include "DataManager.h"
#include "dlgnewvoice.h"
#include <QWidget>

class Voice : public QMainWindow
{
	Q_OBJECT

public:
	Voice(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Voice();

private:
	Ui::VoiceClass ui;
	DataManager m_dataSource;
private slots:
		int onAdd();
		int onRemove();
		int onFilterChanged();

private:
	void display(Yuliao& record);
	void display(YuliaoList& records);

	Yuliao m_voice;
};

#endif // VOICE_H
