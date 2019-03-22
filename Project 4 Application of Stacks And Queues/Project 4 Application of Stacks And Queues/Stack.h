#ifndef STACK
#define STACK
#include <string>
#include <iostream>


//const int EMPTY = -1;
const int STACKMAX = 100;
const int FULL = STACKMAX - 1;

template <class T>
class Stack
{
private:
	//Index
	int top;
	int count;
	T *stackArray[STACKMAX];

public:
	Stack();
	bool empty();
	bool full();
	bool push(T *data);
	void pop();
	bool peek(T &test);

	void log(char say);
};


template <class T>
Stack<T>::Stack()
	:top(EMPTY)
{
	this->count = top + 1;
}
template <class T>
bool Stack<T>::empty()
{
	return this->top == EMPTY ? true : false;
}
template <class T>
bool Stack<T>::full()
{
	return this->top == FULL ? true : false;
}
template <class T>
bool Stack<T>::push(T *data)
{
	if (this->full())
	{

		return false;
	}

	this->stackArray[++top] = data;
	this->count++;
	return true;
}
template <class T>
void Stack<T>::pop()
{
	if (this->empty())
	{

	}

	 this->stackArray[top--];
}
template <class T>
bool Stack<T>::peek(T &test)
{
	T *ptr = test;
	if (this->empty())
	{
	
		//auto test = new T();
		//return test;
	}
	ptr = this->stackArray[top];
	return true;
}

//Helper function. Reduces input for COUTS

template <class T>
void Stack<T>::log(char say)
{
	std::cout << say << std::endl;
};
#endif