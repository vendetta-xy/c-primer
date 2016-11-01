// inline_fun.cpp : 定义控制台应用程序的入口点。
//内联函数和宏的区别在于，宏是由预处理器对宏进行替代，而内联函数是通过编译器控制来实现的。
//而且内联函数是真正的函数，只是在需要用到的时候，内联函数像宏一样的展开，所以取消了函数的参数压栈，减少了调用的开销。
//你可以象调用函数一样来调用内联函数，而不必担心会产生于处理宏的一些问题。

#include "stdafx.h"
#include<iostream>
using namespace std;
//内联函数适用于定义一些规模较小，流程直接，频繁调用的函数
inline void reset(int &i) {
	i = 0;
}
inline int MyCompare(const int val, const int*p) {
	return (val > *p) ? val : *p;
}
int main()
{
    return 0;
}

