#ifndef _YULIAO_H
#define _YULIAO_H
#include <list>
#include <QString>
#include <QPoint>
using namespace std;

// һ����¼
class Yuliao
{
public:
	Yuliao(): id(0) {}

public:
	int id;
	char name[32];

	char short_content[100];
	char content[100];

};

// �б�
typedef list<Yuliao> YuliaoList;

#endif