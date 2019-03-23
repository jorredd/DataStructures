#pragma once
#ifndef NODE
#define NODE



#include "Node.h"
#include "Stack.h"
#include "Queue.h"
#include <string>
#include <fstream>
#include <iostream>
#include <typeinfo>

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
	Node<T> *Head = NULL;
	T returnData();
	void addNode(T data);
	Node();




};


template<class T>
T Node<T>::returnData()
{
	return T();
}

template<class T>
inline Node<T>::Node()
{
}

//Adds a node to the end of the list
template <class T>
void Node<T>::addNode(T data)
{
	//Head is defined as NULL in the private data
	if (Head == NULL)
	{
		Head = new Node<T>();
		Head->Data = data;
		Head->Next = NULL;
		Head->Prev = NULL;

		//Add to Queue and Stack
		this->enqueue(Head);

	}
	else
	{
		//Set A Pointer equal to the head
		Node<T> *p = Head;

		//Create the new node
		Node<T> *n = new Node<T>();
		n->Data = data;
		n->Next = NULL;


		//Traverse to the end of the list
		while (p->Next != NULL)
		{
			p = p->Next;
		}
		//Assign the next pointer to the new node
		p->Next = n;
		n->Prev = p;

		//Add to Queue and Stack
		this->enqueue(n);

	}
};
#endif


