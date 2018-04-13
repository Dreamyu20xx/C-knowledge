#include<iostream>
#include<malloc.h>
#include<assert.h>

using namespace std;

char a;
char *p =&a;
//void t(char **pptr)
//{
//	p = (char *)malloc(1);
//	*pptr = p;
//
//}

int main()
{
	char **pptr =&p;
//	char *p;
//	pptr = &p;
//  int sa = 2;
//   int sa2 = 2;
//   	char *p1;
//	*pptr = &p;
//	t(pptr);
	assert(*pptr == p);
//	*pptr = p;
//	t(&pptr);
//	cout<<*pptr<<endl;
	cout<<"hello wprld"<<endl;
	return 0;
}
