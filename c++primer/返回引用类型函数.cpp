// �����������ͺ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int &get(int *arry, int index) { return arry[index]; }//���ض�arry[index]������
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

