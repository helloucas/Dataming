#pragma once
#include<vector>
#include<iostream>
#include<string>
#include<map>
using namespace std;

class Apriori
{
public:
	Apriori();
	~Apriori();
private:
	int   Min_support;  //最小支持度
	vector<string>vec_str;  //保存从文件读取的字符
	map<string, int>map_str_int;   //一项备选集
	//vector<item>vec_item;   //一项频繁集
};

