// Dataming.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include"readfiletovector.h"
#include"frequent.h"
#include"split.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<string>temp = readfiletovec("file.txt");
	frequent1(temp);



	return 0;

}

