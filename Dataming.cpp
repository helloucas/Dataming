// Dataming.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include"readfiletovector.h"
#include"split.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	readfiletovec("file.txt");
	
	return 0;
}

