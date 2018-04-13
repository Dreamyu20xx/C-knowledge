#include "Link.h"
#include "Node.h"
#include <iostream>

using namespace std;
Link::Link()
{
	m_head = NULL;
	//ctor
}

Link::~Link()
{
	//dtor
}

Node* Link::createNode(int key)
{
	Node* p = new Node(key);
	return p;
}

void Link::insertLink(Node*T)
{
	Node *pre = m_head;
	if(m_head == NULL)
	{
		m_head = T;
		return;
	}
	while(pre->m_next!= NULL)
	{
		pre = pre->m_next;
	}
	pre->m_next = T;
}

Node* Link::searchLink(int key)
{
	Node *pre = m_head;
	while (pre != NULL)
	{
		if(pre->getKey() == key)
		{
			return pre;
		}
		pre = pre->m_next;
	}

	return NULL;
}

void Link::removeNode(Node*T)
{
	Node *pre = m_head;

	if (m_head == T)
	{
		m_head= m_head->m_next;
		freeNode(T);
	}

	Node*p = pre->m_next;
	while(p != NULL)
	{
		if (p == T)
		{
			pre->m_next = p->m_next;
			freeNode(T);
		}
		pre= pre->m_next;
		p = pre->m_next;
	}
}

void Link::freeNode(Node *T)
{
	delete T;
}

void Link::traverse(void)
{
	Node *p = m_head;
	while (p!= NULL)
	{
		p->display();
		p=p->m_next;
	}
	cout<<endl;
}
void Link::linkreverse(void)
{
	if(m_head == NULL && m_head->m_next==NULL)
	{
		return;
	}

	Node*pre = NULL;
	Node*next = NULL;

	while(m_head != NULL)
	{
		next = m_head->m_next;//last
		m_head->m_next = pre;
		pre = m_head;//now
		m_head = next;
	}
	m_head = pre;
}
