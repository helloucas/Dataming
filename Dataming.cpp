// Dataming.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include"Apriori.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Apriori  a(5,2);
	a.getitem("file.txt");
//	a.display(1, item);

	
	


	return 0;

}

