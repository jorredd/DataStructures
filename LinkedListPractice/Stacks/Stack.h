#ifndef STACK
#define STACK
#include <string>

const int EMPTY = -1;
const int STACKMAX = 10;
const int FULL = STACKMAX - 1;

class Stack
{
private:
	//Index
	int top;
	int count;
	int stackArray[STACKMAX];

public:
	Stack();
	bool empty();
	bool full();
	bool push(int data);
	int pop();
	int peek();
	void log(std::string say);
};

#endif