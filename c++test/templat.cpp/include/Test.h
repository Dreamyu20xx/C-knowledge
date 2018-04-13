#ifndef TEST_H
#define TEST_H
#include<iostream>
using namespace std;

template<class T>
class A
{
	public:
//	void f(); // 这里只是个声明
};



template <class T>
T add(T a, T b)
{
	cout<<"no "<<endl;
	return a + b;
}
//template<>
//double add(double a, double b);

//int sub()
//{
//	cout<<"sub"<<endl;
//}
#endif // TEST_H
