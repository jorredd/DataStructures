#ifndef LIST
#define LIST
#pragma once
#include "Queue.h"
#include "Stack.h"
#include <string>
#include <fstream>
#include <iostream>
#include <typeinfo>

using std::fstream;
using std::ostream;
using std::ofstream;
using std::string;
using std::cout;
using std::endl;

template <class T>
class List 
{
private:
	struct Node
	{
		//Head
		T Data;
		//Reference to Next Node
		Node *Next;
		//Reference to the Prev Node
		Node *Prev;
	};
	Queue<Node> *Q = new Queue<Node>();
	Stack<Node> *S = new Stack<Node>();
	Node *Head = NULL;
public:
	List();

	void addNode(T data);
	void deleteNode();
	void printList();
	void printListBackwards();
	void log(T say);

	~List();
};
template <class T>
List<T>::List()
{
}

template <class T>
 List<T>::~List()
{
}
//Adds a node to the end of the list
template <class T>
void List<T>::addNode(T data)
{
//Head is defined as NULL in the private data
	if (Head == NULL)
	{
		Head = new Node;
		Head->Data = data;
		Head->Next = NULL;
		Head->Prev = NULL;

		//Add to Queue and Stack
		Q->enqueue(Head);	
	}
	else
	{
		//Set A Pointer equal to the head
		Node *p = Head;

		//Create the new node
		Node *n = new Node;
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
		Q->enqueue(n);
	}	
};

//Searches for a value then deletes the Node that contains that value and sets the Next Pointer to the following Node
template <class T>
void List<T>::deleteNode()
{
	Node *p = Head;

	//sets pointer to node that is going to get deleted
	Q->dequeue();
	S->pop();
	Node *delPtr = p;

	Head = p->Next;
	Head->Next = p->Next->Next;


	delete delPtr;
}

//Cycles through and prints the entire list  
template <class T>
void List<T>::printList()
{
	Node *p = Head;
	while (p != NULL)
	{
		log(p->Data);
		p = p->Next;
	}
}

//Cycles through and prints the entire list  
template <class T>
void List<T>::printListBackwards()
{
	Node *p = Head;
	while (p != nullptr && p->Next != NULL)
	{
		p = p->Next;
	}

	while (p != nullptr && p != NULL)
	{
		log(p->Data);
		p = p->Prev;
	}
}
//Helper function. Reduces input for COUTS
template <class T>
void List<T>::log(T say)
{
	cout << say << endl;
};
#endif
