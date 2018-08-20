#ifndef DATAMANAGER_H
#define DATAMANAGER_H
#include "Star.h"
#include <QVector>
class DataManager{

public:
	DataManager();
	~DataManager();

public:
	// 加载
public:
	// 加载
	int loadStar();

	// 保存
	int saveStar();

	// 添加
	int addStar(const Star& Star);

	StarList& listStar() { return m_stars; }


	void removeStar(int order);


	Star* findStar(int order);


	void matchStar(const char* name, StarList& results);

private:
	char m_filename[256];
	StarList m_stars; // 所有学生
};

#endif // DATASOURCE_H
