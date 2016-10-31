// iCount.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int iCount(initializer_list<int> il) {
	int count=0;
	for (auto val : il)
		count += val;
	return count;
}

int main()
{
	cout << "1,6,9,10,23的和是" << iCount({ 1,6,9,10,23 }) << endl;
	system("pause");
    return 0;
}

