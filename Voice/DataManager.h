#ifndef DATAMANAGER_H
#define DATAMANAGER_H
#include "Yuliao.h"
#include <QVector>
class DataManager{

public:
	DataManager();
	~DataManager();

public:
	// ����
public:
	// ����
	int loadYuliao();

	// ����
	int saveYuliao();

	// ���
	int addYuliao(const Yuliao& yuliao);

	YuliaoList& listYuliao() { return m_voices; }


	void removeYuliao(int id);


	Yuliao* findPYuliao(int id);


	void matchYuliao(const char* name, YuliaoList& results);

private:
	char m_filename[256];
	YuliaoList m_voices; // ����ѧ��
};

#endif // DATASOURCE_H
