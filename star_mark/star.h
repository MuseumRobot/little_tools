#ifndef _STAR_H
#define _STAR_H
#include <list>
#include <QString>
#include <QPoint>
using namespace std;

// һ����¼
class Star
{
public:
	Star(): order(0) {}

public:
	int order;
	char name[32];

	float star_angle;

	int m_star_x;
	int m_star_y;




};

// �б�
typedef list<Star> StarList;

#endif