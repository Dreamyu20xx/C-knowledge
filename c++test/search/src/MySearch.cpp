#include "MySearch.h"
#include <iostream>

using namespace mysearch;

int MySearch::number[10]={1,2,3,4,5,6,7,8,9,10};

MySearch::MySearch()
{
	//ctor
}

int MySearch::seqsearch(int num)
{
	int guard = NOFIND;
	int i = 0;
	while (i < 10)
	{
		if (num == number[i])
		{
			return i;
		}
		i++;
	}
	return guard;
}

int MySearch::binsearch(int num)
{
	int head = 0;
	int tail = 9;
	int midlm;
	int guard = NOFIND;

	while (tail >= head)
	{
		midlm = (head + tail) / 2;
		if(num == number[midlm])
		{
			return midlm;
		}else if (num > number[midlm]){
			head = midlm + 1;
		}else{
			tail = midlm - 1;
		}
	}
	return guard;
}

MySearch::~MySearch()
{
	//dtor
}

void mysearch::myInsertBinTree(struct BinTree **headnode,struct BinTree * T)
{
	if(*headnode == NULL)
	{
		*headnode = T;
		return ;
	}
	if((*headnode)->key > T->key)
	{
		myInsertBinTree(&((*headnode)->rchild),static_cast<struct BinTree *>(T));
	}else{
		myInsertBinTree(&((*headnode)->lchild),T);
	}
}

void mysearch::printBinTree(struct BinTree *headnode)
{
	if(headnode == NULL)
	{
		return;
	}else{
		std::cout<<" "<<headnode->key;

		if(headnode->lchild != NULL)
		{
			printBinTree(headnode->lchild);
		}
		if(headnode->rchild != NULL)
		{
			printBinTree(headnode->rchild);
		}
	}
}

struct BinTree *mysearch:: createTreenode(int key)
{
	struct BinTree *p = new struct BinTree;
	p->key = key;
	p->lchild = NULL;
	p->rchild = NULL;
	return p;
}

void mysearch::delTreenode(struct BinTree *p)
{
	delete p;
}
