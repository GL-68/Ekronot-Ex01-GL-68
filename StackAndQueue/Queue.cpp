#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q = new Queue;
	q->_array = new unsigned int[size];
	q->_head = q->_array;
	q->_maxSize = size;
	q->_count = 0;
}

void cleanQueue(Queue* q)
{
	delete[] q->_array;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (q->_count < q->_maxSize)
	{
		q->_head[q->_count] = newValue;
		q->_count++;
	}
}

int dequeue(Queue* q)
{
	int temp = -1;
	if (q->_count)
	{
		temp = *(q->_head);
		(q->_head)++;
	}
	return temp;
}

bool isEmpty(Queue* s)
{
	return !(bool)(s->_count);
}

bool isFull(Queue* s)
{
	return s->_count == s->_maxSize;
}