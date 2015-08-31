#pragma once
#include<vector>
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

class Apriori
{
public:
	Apriori(size_t, unsigned int);
	~Apriori();
	void getitem(string filename);
	//求事物的频繁项集；
	map<vector<string>, unsigned int>find_freitem();      
	//链接k-1级频繁项  ，得到第k级频繁项目
	map<vector<string>, unsigned int>apri_gen(unsigned int k, map<vector<string>, unsigned int>k_item);
	//display frequent item set
	void show(unsigned int k, map<vector<string>, unsigned int>showmap);
	void display(unsigned int k, map<unsigned int, vector<string>>showmap);
private:
	map<unsigned int, vector<string>>item;     //存储所有最开始的事物和其项集


	map<vector<string>, unsigned int> k_item;  //存储频繁项集


	size_t  item_size;  //事物数目；
	unsigned int  min_value;    //最小支持度；
};

