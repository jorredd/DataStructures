//TODO: change this to a templated class
#ifndef QUEUE
#define QUEUE
#include <string>

using std::string;

const int MAXQUEUE = 10;
const int QFULL = MAXQUEUE;
const int QEMPTY = 0;
const int EMPTY = -1;



class Queue
{
private:
	string content;
	char items[MAXQUEUE];
	int head;
	int tail;

public:
	Queue();

	bool isEmpty();
	bool isFull();
	bool enqueue(char item);
	char dequeue();
	bool peek();

	void log(char say);
};

#endif