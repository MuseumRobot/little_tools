#ifndef _PIPEDATATYPE_H
#define _PIPEDATATYPE_H
#include <list>
#include <QPoint>

using namespace std;

// 一条记录record
class PipeDataType{

public:
	PipeDataType(): id(0){}

public:
	int id;
	char name[32];
	typedef enum point_name{
		voice_point = 0;
		path_point = 1;
	}POINT_KIND;
	int Diameter;
	QPoint m_start;
	QPoint m_end;
	QPoint m_center;

};
// 多条记录（列表）
typedef list<PipeDataType> PipeDataTypeList;

#endif