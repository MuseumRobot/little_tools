#ifndef DATAMANAGER_H
#define DATAMANAGER_H
#include "Star.h"
#include <QVector>
class DataManager{

public:
	DataManager();
	~DataManager();

public:
	// ����
public:
	// ����
	int loadStar();

	// ����
	int saveStar();

	// ���
	int addStar(const Star& Star);

	StarList& listStar() { return m_stars; }


	void removeStar(int order);


	Star* findStar(int order);


	void matchStar(const char* name, StarList& results);

private:
	char m_filename[256];
	StarList m_stars; // ����ѧ��
};

#endif // DATASOURCE_H
