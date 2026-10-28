#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct UnsignedNode
{
	unsigned int _data;
	struct UnsignedNode* _next;
} UnsignedNode;

/**
 * @brief creates a new node with a given data value
 * @param data data value for node
 * @return the new node
 */
UnsignedNode* makeNode(unsigned int data);

/**
 * @brief adds a node is place of the head
 * @param head head of the list
 * @param data data for the node
 */
void addAsHead(UnsignedNode** head, unsigned int data);

/**
 * @brief removes the head node of the list and resettles the head pointer
 * @param head head of the list
 */
void removeHead(UnsignedNode** head);

/**
 * @brief returns whether a list is empty
 * @param head head of the list
 * @return true if the list is empty, else false
 */
bool isEmpty(UnsignedNode* head);

/**
 * @brief returns the data of a node
 * @param node node containing an unsigned int
 * @return unsigned int of what is contained within the node
 */
unsigned int getData(UnsignedNode* node);

/**
 * @brief clears a list
 * @param node head of the list (node to work from - recursive function)
 */
void clearList(UnsignedNode* head);

#endif