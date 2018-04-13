#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "hello world";
	char a1[] = "hello world";
	char b[10];

	memmove(a+2,a,6);
//	memcpy(a+2,a,6);
	printf("a %s\n",a);
	memcpy(a1+2,a1,6);
	printf("a1 %s\n",a1);
	return 0;
}


