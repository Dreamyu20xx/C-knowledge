#include <iostream>

using namespace std;

class A{

};
class B:public A
{

};
class C
{
	operator A()
	{
		cout<<"hello world"<<endl;
	}
};

int main()
{
	C C1();
	C1.operator A();
//	A(C1);
//	C();

	return 0;
}
