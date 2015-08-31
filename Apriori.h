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
	//�������Ƶ�����
	map<vector<string>, unsigned int>find_freitem();      
	//����k-1��Ƶ����  ���õ���k��Ƶ����Ŀ
	map<vector<string>, unsigned int>apri_gen(unsigned int k, map<vector<string>, unsigned int>k_item);
	//display frequent item set
	void show(unsigned int k, map<vector<string>, unsigned int>showmap);
	void display(unsigned int k, map<unsigned int, vector<string>>showmap);
private:
	map<unsigned int, vector<string>>item;     //�洢�����ʼ����������


	map<vector<string>, unsigned int> k_item;  //�洢Ƶ���


	size_t  item_size;  //������Ŀ��
	unsigned int  min_value;    //��С֧�ֶȣ�
};

