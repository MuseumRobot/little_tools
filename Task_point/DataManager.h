#ifndef DATAMANAGER_H
#define DATAMANAGER_H
#include "Point_ziwei.h"
#include <QVector>
class DataManager{

public:
	DataManager();
	~DataManager();

public:
	// ����
public:
	// ����
	int loadPoint();

	// ����
	int savePoint();

	// ���
	int addPoint(const Point_ziwei& point);

	PointList& listPoint() { return m_points; }


	void removePoint(int id);


	Point_ziwei* findPoint(int id);


	void matchPoint(const char* name, PointList& results);

private:
	char m_filename[256];
	PointList m_points; // ����ѧ��
};

#endif // DATASOURCE_H
