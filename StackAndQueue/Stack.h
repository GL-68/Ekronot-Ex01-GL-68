#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

/* a positive-integer value stack, with no size limit */
typedef struct Stack
{
	UnsignedNode* _top;
} Stack;

/**
 * @brief pushes a new element to the top of the stack
 * @param s stack
 * @param element element to be added 
 */
void push(Stack* s, unsigned int element);

/**
 * @brief removes an element from the top of the stack, returning it if it does exist
 * @param s stack
 * @return the data of the stack top if it is not empty, else -1
 */
int pop(Stack* s); // Return -1 if stack is empty

/**
 * @brief initiates a stack
 * @param s stack to be initiated
 */
void initStack(Stack* s);

/**
 * @brief cleans the stack
 * @param s stack to be cleaned
 */
void cleanStack(Stack* s);

/**
 * @brief returns whether the stack is empty
 * @param s stack to be checked
 * @return true if the stack is empty, else false
 */
bool isEmpty(Stack* s);

#endif // STACK_H