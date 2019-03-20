#include "Stack.h"
#include <iostream>
#include <string>

Stack::Stack()
	:top(EMPTY)
{
	this->count = top + 1;
}
bool Stack::empty()
{
	return this->top == EMPTY ? true : false;
}
bool Stack::full()
{
	return this->top == FULL ? true : false;
}
bool Stack::push(int element)
{
	if (this->full())
	{
		
		return false;
	}

	this->stackArray[++top] = element;
	this->count++;
	return true;
}
int Stack::pop()
{
	if (this->empty())
	{
		log("Empty");
		return EMPTY;
	}

	return this->stackArray[top--];
}
int Stack::peek()
{
	if (this->empty())
	{
		log("Empty");
		return EMPTY;
	}

	return this->stackArray[top];
}

//Helper function. Reduces input for COUTS
void Stack::log(std::string say)
{
	std::cout << say << std::endl;
};