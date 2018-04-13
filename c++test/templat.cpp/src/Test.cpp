#include "Test.h"
#include<iostream>

using namespace std;

//template<class T>
//void A<T>::f() // 模板的实现
//{
//	cout<<"function f"<<endl;
//}
//template<class T>
//void A<int>::f() // 模板的实现
//{
//	cout<<"function f"<<endl;
//}
template<>                                  // 全特化　注意语法.必须放在同类函数的下面
double add(double a, double b)              //不能用在
{
	cout<<"quan "<<endl;
	return a + b;
}
