// fun_pointer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

int f1(int a, int b) {
	return a + b;
}
int f2(int a, int b) {
	return a - b;
}
int f3(int a, int b) {
	return a*b;
}
int f4(int a, int b) {
	return a / b;
}
void Compute(int a, int b, int(*p)(int, int)) {
	cout << p(a, b) << endl;
}
int main()
{
	int a = 7, b = 8;
	decltype(f1)*p1 = f1, *p2 = f2, *p3 = f3, *p4 = f4;
	vector<decltype(f1)*> vP = { p1,p2,p3,p4 };
	for (auto p : vP) {
		Compute(a, b, p);
	}
	system("pause");
    return 0;
}

