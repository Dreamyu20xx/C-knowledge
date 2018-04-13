#include<iostream>
#include<vector>
#include<iterator>
#include<string>
#include<string.h>

using namespace std;
int  number[10]={1,2,3,4,5,6,7,8,9,10};

void removeO(vector<int> &v1)
{
	vector<int> v2;
	vector<int>::iterator it = v1.begin();

	for(it;it<v1.end();it++)
	{
		if(*it%2 == 1)
		{
			v2.push_back(*it);
		}
	}
	swap(v1,v2);
}

void printarrar(vector<int> &v1)
{
	vector<int>::iterator it = v1.begin();

	for(it;it<v1.end();it++)
	{
		cout<<" "<<*it;
	}
	cout<<endl;
}

struct A
{
	string s;
	int i;
	float f;
};

void printA(struct A&a)
{
	cout<<" "<<" "<<a.i<<" "<<a.f<<endl;
}

int main()
{
	vector<int> V(number,number+10);
	removeO(V);
	printarrar(V);
	A a = {};
	A a1;

	cout<<"int is "<<sizeof(int)<<sizeof(float)<<sizeof(a)<<endl;
	memset(&a1,0,sizeof(A));
	printA(a);
	printA(a1);
//	while(1);
	return 0;
}
