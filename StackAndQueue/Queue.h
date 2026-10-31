#ifndef QUEUE_H
#define QUEUE_H


/* a queue contains positive integer values. */
typedef struct Queue
{
	unsigned int* _array;
	unsigned int* _head;
	unsigned int _maxSize;
	unsigned int _count;
} Queue;

/**
@brief initializes a queue of entered size
@param q queue instance to be initialized
@param size maximal size bounding of queue
**/
void initQueue(Queue* q, unsigned int size);

/**
 * @brief frees everything within entered queue
 * @param q queue instance the values of which are to be freed
 */
void cleanQueue(Queue* q);

/**
 * @brief function that adds another value to the queue
 * @param q queue to be added to
 * @param newValue the value to be added
 */
void enqueue(Queue* q, unsigned int newValue);

/**
 * @brief function that removes an element from the queue
 * @param q queue to remove from
 * @return int: -1 if the queue was already empty (failure), else the value of the removed element
 */
int dequeue(Queue* q);

/**
 * @brief function that returns whether the queue is empty
 * @param s queue to be checked
 * @return bool: true if queue is empty, else false
 */
bool isEmpty(Queue* s);

/**
 * @brief function that returns whether the queue is full
 * @param s queue to be checked
 * @return bool: true if the queue is full, else false
 */
bool isFull(Queue* s);

#endif /* QUEUE_H */