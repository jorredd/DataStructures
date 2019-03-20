#ifndef LIST
#define LIST
#pragma once
#include "Queue.h"
#include <string>
#include <fstream>
#include <iostream>

using std::fstream;
using std::ostream;
using std::ofstream;
using std::string;

class List : public Queue
{
private:
	struct Node
	{
		//Head
		string Data;
		//Reference to Next Node
		Node *Next;
		//Reference to the Prev Node
		Node *Prev;
	};
	Node *Head = NULL;
public:
	List();

	void addNode(string data);
	void insertAfter(string search, string value);
	void deleteNode(string search);
	void printList();
	void printListBackwards();
	void log(string say);

	~List();
};
#endif
