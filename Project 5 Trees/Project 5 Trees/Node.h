#pragma once
#ifndef NODE
#define NODE






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







};

template <class T>
T returnData() {
	return this->Data;
}


#endif