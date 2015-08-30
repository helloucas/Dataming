#pragma once
#include"stdafx.h"
#include"readfiletovector.h"
#include<vector>
#include<string>
#include<iostream>
#include<map>
using namespace std;
void frequent1(vector<string>&temp)
{
	map<string, int>ab;
	ab["T1"] = 0;
	ab["T2"] = 0;
	ab["T3"] = 0;
	ab["T4"] = 0;
	ab["T5"] = 0;


	for (int i = 0; i < temp.size(); i++)
	{
		string  str = temp[i];
		for (map < string, int > ::iterator iter = ab.begin(); iter != ab.end(); iter++)
		{
			if (str == iter->first)
				iter->second++;
		}
	}

	for (map < string, int > ::iterator iter = ab.begin(); iter != ab.end(); iter++)
	{
		cout << iter->first << "\t" << iter->second <<endl;
	}



}