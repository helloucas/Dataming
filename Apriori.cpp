#include "stdafx.h"
#include "Apriori.h"
#include"split.h"
#include<iostream>
#include<fstream>
using namespace std;


Apriori::Apriori(size_t is = 0,unsigned int mv = 0)
{
	item_size = is;
	min_value = mv;
}


Apriori::~Apriori(  )              //û�������ڴ� ���Բ���Ҫ��������
{
}


void Apriori::getitem(string filename)                   //input the initinal  data set
{
	ifstream  infile;
	infile.open(filename, ios::in);
	if (!infile)
	{
		cerr << "open file error" << endl;
		exit(1);
	}                              //�򿪴���data���ļ�

	string  str;
	int i = 1;
	while (getline(infile, str))
	{
		vector<string>temp = split(str, ", ");
		item.insert(make_pair(i++, temp));
	}

	infile.close();
	display(1, item);
}                                                                         //�����ݴ���item������




void Apriori::show(unsigned int k, map<vector<string>, unsigned int>showmap)                //show����
{
	map<vector<string>, unsigned int>::iterator  iter = showmap.begin();
	cout << "DATA  SET  " << "\t" << "FREQUENT" << endl;
	while (iter!=showmap.end())
	{
		vector<string> vec = iter->first;
		vector<string>::iterator  vecit = vec.begin();
		cout << "{";
		while (vecit!=vec.end())
		{
			cout << *vecit++ << " ";
        }
		cout << "}" << "\t";
		cout << iter->second << endl;
		iter++;
	}
}

void Apriori::display(unsigned int k, map<unsigned int, vector<string> >showmap)                //display ����
{
	
	map<unsigned int, vector<string>>::iterator  iter = showmap.begin();
	cout << "DATA  SET  " << "\t" << "FREQUENT" << endl;
	while (iter != showmap.end())
	{
		vector<string> vec = iter->second;
		vector<string>::iterator  vecit = vec.begin();
		cout << "{";
		while (vecit != vec.end())
		{
			cout << *vecit++ << " ";
		}
		cout << "}" << "\t";
		cout << iter->first << endl;
		iter++;
	}
}