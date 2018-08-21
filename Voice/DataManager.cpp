
#include <stdio.h>
#include <string.h>
#include "DataManager.h"
DataManager::DataManager(){

}
DataManager::~DataManager(){

}
int DataManager::loadYuliao()
{
	FILE* fp = fopen("voice.data", "rb");
	if(!fp) return 0;

	m_voices.clear(); // ���

	// ��������	
	while( !feof(fp))
	{
		Yuliao record;
		int n = fread(&record, 1, sizeof(Yuliao), fp);
		if( n < 0 ) break;
		if( n == 0) continue;

		m_voices.push_back(record);
	}

	fclose(fp);
	return 0;
}

// ����
int DataManager::saveYuliao()
{
	FILE* fp = fopen("voice.data", "wb");
	if(!fp) return -1;

	// ����ÿ����¼
	for(YuliaoList::iterator iter = m_voices.begin();
		iter != m_voices.end(); iter ++)
	{
		Yuliao& record = *iter;
		fwrite(&record, 1, sizeof(Yuliao), fp);
	}

	fclose(fp);
	return 0;
}

// ���
int DataManager::addYuliao(const Yuliao& stu)
{
	m_voices.push_back(stu);
	return 0;
}

// ɾ��
void DataManager::removeYuliao(int id)
{
	for(YuliaoList::iterator iter = m_voices.begin();
		iter != m_voices.end(); iter ++)
	{
		Yuliao& record = *iter;
		if(record.id == id)
		{
			m_voices.erase(iter);
			break;
		}
	}
}

// ��ѧ�Ų��� 
Yuliao* DataManager::findPYuliao(int id)
{
	for(YuliaoList::iterator iter = m_voices.begin();
		iter != m_voices.end(); iter ++)
	{
		Yuliao& record = *iter;
		if(record.id == id)
		{
			return &record;
		}
	}
	return NULL;
}

// ������ƥ�����
void DataManager::matchYuliao(const char* name, YuliaoList& results)
{
	for(YuliaoList::iterator iter = m_voices.begin();
		iter != m_voices.end(); iter ++)
	{
		Yuliao& record = *iter;
		// ��׼C��Ĳ��Һ���
		if( strstr(record.name, name) != NULL) 
		{
			results.push_back(record);
		}
	}	
}
