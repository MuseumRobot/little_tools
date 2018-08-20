
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

	m_stars.clear(); // 清空

	// 加载数据	
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

// 保存
int DataManager::saveStar()
{
	FILE* fp = fopen("star.data", "wb");
	if(!fp) return -1;

	// 保存每条记录
	for(StarList::iterator iter = m_stars.begin();
		iter != m_stars.end(); iter ++)
	{
		Star& record = *iter;
		fwrite(&record, 1, sizeof(Star), fp);
	}

	fclose(fp);
	return 0;
}

// 添加
int DataManager::addStar(const Star& stu)
{
	m_stars.push_back(stu);
	return 0;
}

// 删除
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

// 按学号查找 
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

// 按姓名匹配查找
void DataManager::matchStar(const char* name, StarList& results)
{
	for(StarList::iterator iter = m_stars.begin();
		iter != m_stars.end(); iter ++)
	{
		Star& record = *iter;
		// 标准C里的查找函数
		if( strstr(record.name, name) != NULL) 
		{
			results.push_back(record);
		}
	}	
}
