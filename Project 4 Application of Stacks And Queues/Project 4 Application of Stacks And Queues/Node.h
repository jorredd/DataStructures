#pragma once
#ifndef NODE
#define NODE



#include <string>
using std::string;

template <class T>
class Node 
{
public:
	//Head
	T Data;
	//Reference to Next Node
	Node *Next;
	//Reference to the Prev Node
	Node *Prev;



	T returnData() {
		return this->Data;
	}

	Node();



};
#endif