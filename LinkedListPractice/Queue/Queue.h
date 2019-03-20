#include <string>


const int MAXQUEUE = 10;
const int QFULL = MAXQUEUE;
const int QEMPTY = 0;
const int EMPTY = -1;

#ifndef QUEUE
#define QUEUE

class Queue
{
private:
	int items[MAXQUEUE];
	int head;
	int tail;

public:
	Queue();

	bool isEmpty();
	bool isFull();
	bool enqueue(int item);
	int dequeue();
	bool peek();

	void log(int say);
};

#endif