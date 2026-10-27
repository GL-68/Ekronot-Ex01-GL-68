#include <iostream>
#include "Utils.h"
#include "Stack.h"
#define TEN 10

void reverse(int* nums, unsigned int size)
{
	Stack* tempStack = new Stack;
	initStack(tempStack);
	for (int i = 0; i < size; i++)
	{
		push(tempStack, nums[i]);
	}
	for (int i = 0; i < size; i++)
	{
		nums[i] = pop(tempStack);
	}
	cleanStack(tempStack);
	delete tempStack;
}

int* reverse10()
{
	int* temp = new int[TEN];
	for (int i = 0; i < TEN; i++)
	{
		std::cout << "Enter number" << i << ":" << std::endl;
		std::cin >> temp[i];
	}
	reverse(temp, TEN);
	return temp;
}