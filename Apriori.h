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
	int   Min_support;  //��С֧�ֶ�
	vector<string>vec_str;  //������ļ���ȡ���ַ�
	map<string, int>map_str_int;   //һ�ѡ��
	//vector<item>vec_item;   //һ��Ƶ����
};

