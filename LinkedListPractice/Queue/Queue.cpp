#include "queue.h"
#include <string>
#include <iostream>
Queue::Queue()
	: head(QEMPTY), tail(QEMPTY)
{
}
bool Queue::isEmpty()
{
	return this->head == this->tail;
}
bool Queue::isFull()
{
	return this->tail == MAXQUEUE;
}
bool Queue::enqueue(int item)
{
	if (this->isFull())
	{
		return false;
	}
		
	this->items[this->tail] = item;
	tail = (tail + 1) % MAXQUEUE;
	return true;
}
int Queue::dequeue()
{

	if (this->isEmpty())
	{
		//should return a message saying fll here ex: log(empty)
		return EMPTY;
	}
	
	int item = this->items[head];
	this->head = (this->head + 1) % MAXQUEUE;
	return item;
}

bool Queue::peek()
{
	if (this->isEmpty())
	{
		//should return a message saying fll here ex: log(empty)
		return false;
	}

	int item = this->items[head];
	log(item);
	return true;
}

//Helper function. Reduces input for COUTS
void Queue::log(int say)
{
	std::cout << say << std::endl;
};