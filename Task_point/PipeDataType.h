#ifndef _PIPEDATATYPE_H
#define _PIPEDATATYPE_H
#include <list>
#include <QPoint>

using namespace std;

// һ����¼record
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
// ������¼���б�
typedef list<PipeDataType> PipeDataTypeList;

#endif