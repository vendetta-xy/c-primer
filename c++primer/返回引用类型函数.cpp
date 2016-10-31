// 返回引用类型函数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int &get(int *arry, int index) { return arry[index]; }//返回对arry[index]的引用
int main()
{
	int ai[10];
	for (int i = 0; i < 10; i++)
		get(ai, i) = i;
	for (auto val : ai)
		cout << val << endl;
	system("pause");
    return 0;
}

