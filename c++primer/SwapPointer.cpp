// SwapPointer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void swappointer( int* &p,  int *&q) {
	int *temp = p;
	p = q;
	q = temp;
}


int main()
{
	int a = 5, b = 10;
	int *p = &a, *q = &b;
	cout << "交换前" << endl;
	cout << "p的值是：" << p << ",q的值是：" << q << endl;
	cout << "p所指的值是：" << *p << ",q所指的值是：" << *q << endl;
	swappointer(p, q);
	cout << "交换后" << endl;
	cout << "p的值是：" << p << ",q的值是：" << q << endl;
	cout << "p所指的值是：" << *p << ",q所指的值是：" << *q << endl;
	system("pause");

    return 0;
}

