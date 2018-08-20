#ifndef DATAMANAGER_H
#define DATAMANAGER_H
#include "Point_ziwei.h"
#include <QVector>
class DataManager{

public:
	DataManager();
	~DataManager();

public:
	// 加载
public:
	// 加载
	int loadPoint();

	// 保存
	int savePoint();

	// 添加
	int addPoint(const Point_ziwei& point);

	PointList& listPoint() { return m_points; }


	void removePoint(int id);


	Point_ziwei* findPoint(int id);


	void matchPoint(const char* name, PointList& results);

private:
	char m_filename[256];
	PointList m_points; // 所有学生
};

#endif // DATASOURCE_H
