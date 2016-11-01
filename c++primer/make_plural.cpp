// make_plural.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
string MakePlural(size_t ctr, const string&word, const string&end="s") {
	return (ctr > 1) ? (word + end) : word;
}


int main()
{
	cout << "success�ĵ�����ʽ�ǣ�" << MakePlural(1, "success", "es") << endl;
	cout << "success�ĸ�����ʽ�ǣ�" << MakePlural(2, "success", "es") << endl;
	cout << "failure�ĵ�����ʽ�ǣ�" << MakePlural(1, "failure") << endl;
	cout << "failure�ĸ�����ʽ�ǣ�" << MakePlural(2, "failure") << endl;
	system("pause");
    return 0;
}

