#include<iostream>
using namespace std;

void reset(int &i){//参数是引用类型，可以使我们直接操作引用所引的对象//
	i=0;
}
int main(){
	int num=10;
	cout<<"重置前:num= "<<num<<endl;
	reset(num);
	cout<<"重置后:num= "<<num<<endl;
	return 0;
}
