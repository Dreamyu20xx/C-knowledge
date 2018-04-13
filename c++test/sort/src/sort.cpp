#include "sort.h"
#include <list>
#include <iostream>
namespace mysort{

using namespace std;
int Sort:: number[10] = {265,301,751,129,937,863,742,694,76,438};
Sort::Sort()
{
	//ctor
}

Sort::~Sort()
{
	//dtor
}

Sort::Sort(const Sort& other)
{
	//copy ctor
}

void Sort::insertSortTolist(void)
{
	printarrar();

	list<int> insertnum;
	list<int>::iterator it;

	insertnum.push_back(number[0]);
	for (int i = 1;i < 10;i++)
	{
		for(it = insertnum.begin();it !=insertnum.end();++it)
		{
			if(*it >number[i])
			{
				break;
			}
		}
		insertnum.insert(it,number[i]);
	}
//@@print
//	cout<<"insert sort: ";
//	for(it = insertnum.begin();it != insertnum.end();++it)
//	{
//		cout<<*it<<" ";
//	}
//	cout<<endl;

}

void Sort::insertSort(void)
{
	int j = 0;
	int guard;
	printarrar();
	for(int i= 1;i < 10;i++)
	{
			guard = number[i];
			cout<<i<<" ";

		if(guard < number[i - 1])
		{

			j = i - 1;
			do
			{
				number[j + 1] = number[j];
				j--;
			}while( j>=0&&guard < number[j]);

			number[j + 1] = guard;
			printarrar();
		}
	}
}

void Sort::shellSort(void)
{
	int length = 10;
	int interval = length /2;
	int guard;

	while (interval)
	{
		for (int i = 0;i + interval < length;i++)
		{

			for(int j = i;j + interval < length;j = j + interval)
			{
				guard = j;
				for(int k = j;k + interval < length;k = k + interval )
				{
					if(number[guard] > number[k + interval])
					{
						swap_value<int>(&number[guard],&number[k + interval]);
					}
				}

			}

		}
		interval = interval / 2;
		printarrar();
		cout<<"interval = "<<interval<<endl;
	}
	printarrar();
}

void Sort::printarrar(void)
{
//@@print
	cout<<"sort: ";
	for(int i = 0;i <10;i++)
	{
		cout<<number[i]<<" ";
	}
	cout<<endl;

}
void Sort::bubble(void)
{
	bool exchange;
	for(int j = 0;j < 10-1;j++)//n-1 tang
	{
		exchange = 0;
		for(int i = 0;i < 10 - j -1;i++)
		{
			if(number[i]>number[i+1])
			{
				swap_value<int>(&number[i],&number[i+1]);
				exchange = 1;

			}

		}

		if(exchange == 0)
		{
			cout<<"no exchange"<<endl;
			break;
		}

		printarrar();
	}
	printarrar();
}

void Sort::quicksort(int first,int last)
{
	int guard = number[first];
	int i = first;
	int j = last;

	if(first < last)
	{
		while(i < j)
		{
			while(i<j && number[j] > guard)
			{
				j--;
			}
			if(i < j)//有一种情况是i<1才会退出
			number[i++] = number[j];

			while(i<j && number[i] < guard)
			{
				i++;
			}
			if(i < j)
			number[j--] = number[i];

		}

		number[i] = guard;
		quicksort(first,i - 1);
		quicksort(i + 1,last);
	}
}
//优化一个字节，但是空间复杂度任然是logN;区别是没有一个哨兵。
void Sort::quicksortoptimize(int first,int last)
{
	int i = first;
	int j = last;

	if(first < last)
	{
		while(i < j)
		{
			while(i<j && number[j] > number[i])
			{
				j--;
			}

			if(i < j)//有一种情况是i<1才会退出
			{
				number[i] = number[i] +	number[j];
				number[j] = number[i] - number[j];
				number[i] = number[i] - number[j];
				i++;
			}


			while(i<j && number[i] < number[j])
			{
				i++;
			}
			if(i < j)
			{
				number[i] = number[i] +	number[j];
				number[j] = number[i] - number[j];
				number[i] = number[i] - number[j];
				j = j--;
			}


		}
		printarrar();
		quicksortoptimize(first,i - 1);
		quicksortoptimize(i + 1,last);
	}
}
void Sort::selectsort(void)
{
	for (int j = 0;j < 10;j++)
	{
		for(int i = j;i < 10;i++)
		{
			if(number[j]> number[i])
			{
				swap_value<int>(&number[i],&number[j]);
			}
		}
	}
	printarrar();
}

}
