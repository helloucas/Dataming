//#ifndef READFILE_TOVEC_H
//#define READFILE_TOVEC_H
//#include<fstream>
//#include<iostream>
//#include<string>
//#include<vector>
//#include"split.h"
//#include<map>
//using namespace std;
// 
//
//vector<string> readfiletovec(string filename)
//{
//	ifstream  infile;
//	infile.open("file.txt", ios::in);
//	if (!infile)
//	{
//		cerr << "open file error" << endl;
//		exit(1);
//	}                              //打开存着data的文件
//
//	string  str;
//	vector<string>tmp;
//	while (getline(infile,str))
//	{
//		vector<string>temp = split(str, ", ");
//		for (int i = 0; i < temp.size(); i++)
//		{
//			cout << temp[i] << "\t";
//		}
//	/*	for (int i = 0; i < temp.size(); i++)
//		{
//			tmp.push_back(temp[i]);
//		}*/
//		
//	}
//	/*for (int i = 0; i < tmp.size(); i++)
//	{
//		cout << tmp[i] << "\t";
//	}*/
//	cout << endl;
//	cout << endl;
//
//	
//	infile.close();
//
//	return tmp;
//
//
//
//}
//
//
//#endif