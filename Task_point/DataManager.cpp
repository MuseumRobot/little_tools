
#include <stdio.h>
#include <string.h>
#include "DataManager.h"
DataManager::DataManager(){

}
DataManager::~DataManager(){

}
int DataManager::loadPoint()
{
	FILE* fp = fopen("local.data", "rb");
	if(!fp) return 0;

	m_points.clear(); // ���

	// ��������	
	while( !feof(fp))
	{
		Point_ziwei record;
		int n = fread(&record, 1, sizeof(Point_ziwei), fp);
		if( n < 0 ) break;
		if( n == 0) continue;

		m_points.push_back(record);
	}

	fclose(fp);
	return 0;
}

// ����
int DataManager::savePoint()
{
	FILE* fp = fopen("local.data", "wb");
	if(!fp) return -1;

	// ����ÿ����¼
	for(PointList::iterator iter = m_points.begin();
		iter != m_points.end(); iter ++)
	{
		Point_ziwei& record = *iter;
		fwrite(&record, 1, sizeof(Point_ziwei), fp);
	}

	fclose(fp);
	return 0;
}

// ���
int DataManager::addPoint(const Point_ziwei& stu)
{
	m_points.push_back(stu);
	return 0;
}

// ɾ��
void DataManager::removePoint(int id)
{
	for(PointList::iterator iter = m_points.begin();
		iter != m_points.end(); iter ++)
	{
		Point_ziwei& record = *iter;
		if(record.id == id)
		{
			m_points.erase(iter);
			break;
		}
	}
}

// ��ѧ�Ų��� 
Point_ziwei* DataManager::findPoint(int id)
{
	for(PointList::iterator iter = m_points.begin();
		iter != m_points.end(); iter ++)
	{
		Point_ziwei& record = *iter;
		if(record.id == id)
		{
			return &record;
		}
	}
	return NULL;
}

// ������ƥ�����
void DataManager::matchPoint(const char* name, PointList& results)
{
	for(PointList::iterator iter = m_points.begin();
		iter != m_points.end(); iter ++)
	{
		Point_ziwei& record = *iter;
		// ��׼C��Ĳ��Һ���
		if( strstr(record.name, name) != NULL) 
		{
			results.push_back(record);
		}
	}	
}
