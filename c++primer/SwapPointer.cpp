// SwapPointer.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "����ǰ" << endl;
	cout << "p��ֵ�ǣ�" << p << ",q��ֵ�ǣ�" << q << endl;
	cout << "p��ָ��ֵ�ǣ�" << *p << ",q��ָ��ֵ�ǣ�" << *q << endl;
	swappointer(p, q);
	cout << "������" << endl;
	cout << "p��ֵ�ǣ�" << p << ",q��ֵ�ǣ�" << q << endl;
	cout << "p��ָ��ֵ�ǣ�" << *p << ",q��ָ��ֵ�ǣ�" << *q << endl;
	system("pause");

    return 0;
}

