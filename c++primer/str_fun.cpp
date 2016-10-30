// ConsoleApplication7.cpp : 定义控制台应用程序的入口点。
//

#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;

bool HasUpper(const string &s) {
	for (auto c : s)
		if (isupper(c))
			return true;
	return false;
}
void ChangeToLower(string &s) {
	for (auto &c : s)
		c = tolower(c);
}
int main()
{
	string s;
	cout << "输入字符串：";
	cin >> s;
	if (HasUpper(s)) {
		ChangeToLower(s);
		cout << "更改后字符串为：" << s << endl;
	}
	else
		cout << "无需更改" << endl;
	system("pause");
    return 0;
}

