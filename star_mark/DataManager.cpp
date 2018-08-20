
#include <stdio.h>
#include <string.h>
#include "DataManager.h"
DataManager::DataManager(){

}
DataManager::~DataManager(){

}
int DataManager::loadStar()
{
	FILE* fp = fopen("star.data", "rb");
	if(!fp) return 0;

	m_stars.clear(); // ���

	// ��������	
	while( !feof(fp))
	{
		Star record;
		int n = fread(&record, 1, sizeof(Star), fp);
		if( n < 0 ) break;
		if( n == 0) continue;

		m_stars.push_back(record);
	}

	fclose(fp);
	return 0;
}

// ����
int DataManager::saveStar()
{
	FILE* fp = fopen("star.data", "wb");
	if(!fp) return -1;

	// ����ÿ����¼
	for(StarList::iterator iter = m_stars.begin();
		iter != m_stars.end(); iter ++)
	{
		Star& record = *iter;
		fwrite(&record, 1, sizeof(Star), fp);
	}

	fclose(fp);
	return 0;
}

// ���
int DataManager::addStar(const Star& stu)
{
	m_stars.push_back(stu);
	return 0;
}

// ɾ��
void DataManager::removeStar(int name)
{
	for(StarList::iterator iter = m_stars.begin();
		iter != m_stars.end(); iter ++)
	{
		Star& record = *iter;
		if(record.order == name)
		{
			m_stars.erase(iter);
			break;
		}
	}
}

// ��ѧ�Ų��� 
Star* DataManager::findStar(int name)
{
	for(StarList::iterator iter = m_stars.begin();
		iter != m_stars.end(); iter ++)
	{
		Star& record = *iter;
		if(record.order == name)
		{
			return &record;
		}
	}
	return NULL;
}

// ������ƥ�����
void DataManager::matchStar(const char* name, StarList& results)
{
	for(StarList::iterator iter = m_stars.begin();
		iter != m_stars.end(); iter ++)
	{
		Star& record = *iter;
		// ��׼C��Ĳ��Һ���
		if( strstr(record.name, name) != NULL) 
		{
			results.push_back(record);
		}
	}	
}
