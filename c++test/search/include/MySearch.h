#ifndef MYSEARCH_H
#define MYSEARCH_H
#include <iostream>

namespace mysearch
{
#define NOFIND 32767

class MySearch
{
	public:
		static int number[10];
		MySearch();
		int seqsearch(int number);
		int binsearch(int number);
		virtual ~MySearch();

	protected:

	private:
};


struct BinTree
{
	int key;
	struct BinTree*lchild,*rchild;
};



void printBinTree(struct BinTree *headnode);
struct BinTree * createTreenode(int key);
void delTreenode(struct BinTree *p);
void myInsertBinTree(struct BinTree **headnode,struct BinTree * T);

//void myInsertBinTree(struct BinTree **headnode,struct BinTree * T)
//{
//	if(*headnode == NULL)
//	{
//		*headnode = T;
//		return ;
//	}
//	if((*headnode)->key > T->key)
//	{
//		myInsertBinTree(&((*headnode)->rchild),static_cast<struct BinTree *>(T));
//	}else{
//		myInsertBinTree(&((*headnode)->lchild),T);
//	}
//}


}


#endif // MYSEARCH_H
