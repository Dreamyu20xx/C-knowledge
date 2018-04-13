#include <iostream>

using namespace std;

struct BinTree
{
	int key;
	struct BinTree*lchild,*rchild;
};

void myInsertBinTree(struct BinTree **headnode,struct BinTree * T)
{
	if(*headnode == NULL)
	{
		*headnode = T;
		return ;
	}
	if((*headnode)->key > T->key)
	{
		myInsertBinTree(&((*headnode)->rchild),T);
	}else{
		myInsertBinTree(&((*headnode)->lchild),T);
	}
}

int main()
{

	return 0;
}
