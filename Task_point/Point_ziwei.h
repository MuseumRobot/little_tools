#ifndef _POINT_H
#define _POINT_H
#include <list>
#include <QString>
#include <QPoint>
using namespace std;
typedef enum point_name{
	voice_point = 0,
	path_point = 1
};
// 一条记录
class Point_ziwei
{
public:
	Point_ziwei(): id(0) {}

public:
	int id;
	char name[32];

	int point_kind;
	//int Diameter;
	int content_num;
	int m_destnation_x;
	int m_destnation_y;
	
};

// 列表
typedef list<Point_ziwei> PointList;

#endif
