// �ݹ鷵��vector����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int> vInt, unsigned index) {
	unsigned sz = vInt.size();
	if (!vInt.empty() && index < sz) {
		cout << vInt[index] << endl;
		printVector(vInt, index + 1);
	}
}


int main()
{
	vector<int> v = { 1,2,4,2,4,6,8,5,7 };
	printVector(v, 0);
	system("pause");
    return 0;
}

