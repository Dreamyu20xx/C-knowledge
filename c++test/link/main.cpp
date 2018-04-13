#include "Link.h"
#include "Node.h"

int main()
{

	Link l;
	Node *p = l.createNode(1);
	l.insertLink(p);
	l.traverse();
	p = l.createNode(2);
	l.insertLink(p);
	l.traverse();
	p = l.searchLink(1);
	l.traverse();
	l.linkreverse();
	l.traverse();
	l.removeNode(p);
	l.traverse();
	p = l.searchLink(2);
	l.removeNode(p);
	l.traverse();

	return 0;
}
