#include "Queue.h"

/**
@brief initializes a queue of entered size
@param q queue instance to be initialized
@param size maximal size bounding of queue
**/
void initQueue(Queue* q, unsigned int size)
{
	q = new Queue;
	q->_head = new unsigned int[size];
	q->_maxSize = size;
	q->_count = 0;
}

/**
 * @brief frees everything within entered queue
 * @param q queue instance the values of which are to be freed
 */
void cleanQueue(Queue* q)
{
	delete[] q->_head;
}

/**
 * @brief function that adds another value to the queue
 * @param q queue to be added to
 * @param newValue the value to be added
 */
void enqueue(Queue* q, unsigned int newValue)
{
	if (q->_count < q->_maxSize)
	{
		q->_head[q->_count] = newValue;
		q->_count++;
	}
}

/**
 * @brief function that removes an element from the queue
 * @param q queue to remove from
 * @return -1 if the queue was already empty (failure), else the value of the removed element
 */
int dequeue(Queue* q)
{
	int temp = -1;
	if (q->_count)
	{
		temp = *(q->_head);
		for (int i = 0; i < q->_count;)
		{
			q->_head[i] = q->_head[++i];
		}
	}
	return temp;
}

/**
 * @brief function that returns whether the queue is empty
 * @param s queue to be checked
 * @return true if queue is empty, else false
 */
bool isEmpty(Queue* s)
{
	return !(bool)(s->_count);
}

/**
 * @brief function that returns whether the queue is full
 * @param s queue to be checked
 * @return true if the queue is full, else false
 */
bool isFull(Queue* s)
{
	return s->_count == s->_maxSize;
}