#ifndef QUEUE
#define QUEUE
#include "Node.h"

#include <string>

#include <iostream>

using std::string;

const int MAXQUEUE = 100;
const int QFULL = MAXQUEUE;
const int QEMPTY = 0;
const int EMPTY = -1;


template <class T>
class Queue 
{
private:
	T *items[MAXQUEUE];
	int head;
	int tail;

public:
	Queue();

	bool isEmpty();
	bool isFull();
	bool enqueue(T *item);
    T dequeue();
	bool peek();

	void log(T say);
};

template <class T>
Queue<T>::Queue()
	: head(QEMPTY), tail(QEMPTY)
{
}

template <class T>
bool Queue<T>::isEmpty()
{
	return this->head == this->tail;
}
template <class T>
bool Queue<T>::isFull()
{
	return this->tail == MAXQUEUE;
}
template <class T>
bool Queue<T>::enqueue(T *item)
{
	if (this->isFull())
	{
		return false;
	}

	this->items[this->tail] = item;
	tail = (tail + 1) % MAXQUEUE;
	return true;
}
template <class T>
T Queue<T>::dequeue()
{
	T *item = this->items[head];
	this->head = (this->head + 1) % MAXQUEUE;
	

	return *item;
}
template <class T>
bool Queue<T>::peek()
{
	if (this->isEmpty())
	{
		//should return a message saying fll here ex: log(empty)
		return false;
	}

	char item = this->items[head];
	log(item);
	return true;
}

//Helper function. Reduces input for COUTS
template <class T>
void Queue<T>::log(T say)
{
	std::cout << say << std::endl;
};
#endif
