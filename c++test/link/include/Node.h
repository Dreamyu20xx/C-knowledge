#ifndef NODE_H
#define NODE_H


class Node
{
	public:
		Node(int key);
		virtual ~Node();
		void setKey(int key);
		int getKey(void) const;
		void display(void) const;

		void setNext(Node* next);
		Node* getNext(void) const;
		Node*m_next;

	private:

		int m_key;
};

#endif // NODE_H
