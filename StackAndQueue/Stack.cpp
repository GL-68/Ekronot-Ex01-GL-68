#include "Stack.h"
#include "LinkedList.h"

void push(Stack* s, unsigned int element)
{
	addAsHead(&s->_top, element);
}

int pop(Stack* s)
{
	int temp = -1;
	if (!isEmpty(s->_top))
	{
		temp = getData(s->_top);
		removeHead(&s->_top);
	}
	return temp;
}

void initStack(Stack* s)
{
	s->_top = nullptr;
}

void cleanStack(Stack* s)
{
	clearList(s->_top);
}

bool isEmpty(Stack* s)
{
	return isEmpty(s->_top);
}