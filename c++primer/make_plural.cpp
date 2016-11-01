// make_plural.cpp : 定义控制台应用程序的入口点。
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
	cout << "success的单数形式是：" << MakePlural(1, "success", "es") << endl;
	cout << "success的复数形式是：" << MakePlural(2, "success", "es") << endl;
	cout << "failure的单数形式是：" << MakePlural(1, "failure") << endl;
	cout << "failure的复数形式是：" << MakePlural(2, "failure") << endl;
	system("pause");
    return 0;
}

