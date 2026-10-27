#include "LinkedList.h"

UnsignedNode* makeNode(unsigned int data)
{
	return new UnsignedNode{data, nullptr};
}

void addAsHead(UnsignedNode** head, unsigned int data)
{
	UnsignedNode* temp = makeNode(data);
	temp->_next = *head;
	*head = temp;
}

void removeHead(UnsignedNode** head)
{
	UnsignedNode* temp = nullptr;
	if (*head)
	{
		temp = (*head)->_next;
		delete(*head);
		*head = temp;
	}
}

bool isEmpty(UnsignedNode* head)
{
	return (bool)head;
}

unsigned int getData(UnsignedNode* node)
{
	return node->_data;
}

void clearList(UnsignedNode* node)
{
	if (node->_next)
	{
		clearList(node->_next);
		delete(node);
	}
}