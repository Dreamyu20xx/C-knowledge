#ifndef LINK_H
#define LINK_H
class Node;


class Link
{
	public:
		Link();
		virtual ~Link();
		Node* createNode(int key);
		void insertLink(Node*T);
		Node*searchLink(int key);
		void removeNode(Node*T);
		void freeNode(Node *T);

		void traverse(void);
		void linkreverse(void);
//		static const float a=0;
	protected:

	private:
		Node* m_head;
};

#endif // LINK_H
