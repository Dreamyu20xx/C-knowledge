#include <iostream>
#include <string.h>

using namespace std;



//template<>
//void fun<int ,char >(int a, char b)
//{
//    cout<<"全特化"<<endl;
//}
template <class T>
T add(T a, T b)
{
	cout<<"no "<<endl;
	return a + b;
}

template<>                                  // 全特化　注意语法.必须放在同类函数的下面
double add(double a, double b)
{
	cout<<"quan "<<endl;
	return a + b;
}



template<class T>
class A
{
public:
    explicit A(T val) : t(val)
    {
			cout<<"putong class"<<endl;
		}
    T add(T x) { return t + x; }
private:
    T t;
};

template< >          //
class A<char*>       // 一个全特化的模板类A
{                    // 当用char*类型来实例化类模板A时，将会优先调用这个全特化实例
public:
    explicit A(char* val) : t(val)
    {
			cout<<"quan class"<<endl;
		}
    char* add(char* a, char* b)
    {
			return strcat(a, b);
		}
private:
    char* t;
};

template<class T1>
T1 add(T1* a, T1* b)
{
	cout<<"t1 "<<endl;
	return *a + *b;
}

template<class T1,class T2>//正常
class BT
{
public:
	explicit BT(T1 t1):t(t1)
	{
		cout<<"zhengchang"<<endl;
	}
	T1 t;
};

template<class T1>//
class BT<T1,int >
{
public:
	explicit BT(T1 t1)
		:t(t1)
	{
		cout<<"T1 value is"<<t<<endl;
	}
	T1 t;
};

template<class T1>//
class BT<T1*,int >
{
public:
	explicit BT(T1 *t1)
		:t(t1)
	{
		cout<<"T1* value is"<<t<<endl;
	}
	T1 *t;
};

template<class T1>//
class BT<T1&,int >
{
public:
	explicit BT(T1 t1)
		:t(t1)
	{
		cout<<"T1& value is"<<t<<endl;
//		cout<<"a = "<<a<<endl;
	}
	T1 t;
};

int main()
{
//////	int a = 1;
//////	int b = 2;
//////	cout<<"a+b= "<<add(a,b)<<endl;//??
//////	A<int> A1(4);
//////	cout<<"4+5= "<<A1.add(5)<<endl;
//////
//////	A<char*> A2("HELLO");
//////
//////	double aa = 1.1;
//////	double bb = 2.2;
//////	cout<<"aa + bb = "<<add(aa,bb)<<endl;//??
////	int ta = 1;
////	int tb = 2;
////	int *pta = &ta;
////	int *ptb = &tb;
////	add(pta, ptb);
	int B1 = 10;
	char Bb1= 6;
	BT<char,char> b1(Bb1);
	BT<char,int> b2(Bb1);

	int&by = B1;
	BT<int&,int> b3(by);

	int*ba = &B1;
	BT<int*,int> b4(ba);
	return 0;
}
