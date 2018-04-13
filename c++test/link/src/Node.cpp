#include "Node.h"
#include <iostream>

using namespace std;

Node::Node(int key)
{
	m_key = key;
	m_next = NULL;
}

void Node::setKey(int key)
{
	m_key = key;

}

int Node::getKey(void) const
{
	return m_key;
}

void Node::display(void) const
{
	cout<<m_key<<" ";
}

void Node::setNext(Node* next)
{
	m_next = next;
}

Node* Node::getNext(void)const
{
	return m_next;
}


Node::~Node()
{
}
