// print_arr.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void PrintArray(const int *b, const int *e) {
	for (auto p = b; p != e; p++)
		cout << *p << endl;
}


int main()
{
	int a[2] = { 1,2 };
	auto b = begin(a);
	auto e = end(a);
	PrintArray(b, e);
	system("pause");
    return 0;
}

