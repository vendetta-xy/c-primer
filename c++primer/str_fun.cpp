// ConsoleApplication7.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "�����ַ�����";
	cin >> s;
	if (HasUpper(s)) {
		ChangeToLower(s);
		cout << "���ĺ��ַ���Ϊ��" << s << endl;
	}
	else
		cout << "�������" << endl;
	system("pause");
    return 0;
}

