#include<stdio.h>

int main()
{
	long int a[2][2]={1,2,3,4};
	long int**p = a;

	printf("p = %d\n",*(p+1));//错误
  long int(*p1)[2]={a[0],a[1]};
  printf("p1 = %d\n",*(*(p1+1)+1));//正确
  long int(*p2)[2] = NULL;
  p2 = a;
	printf("p2 = %d\n",*(*(p2+1)+1));//正确
	return 0;

}
