#ifndef LIST
#define LIST
#pragma once


#include "Node.h"
#include "Stack.h"
#include "Queue.h"
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
class List : public Node<T>, public Stack<Node<T>>, public Queue<Node<T>>
{
private:
	//struct Node
	//{
	//	//Head
	//	T Data;
	//	//Reference to Next Node
	//	Node *Next;
	//	//Reference to the Prev Node
	//	Node *Prev;
	//};
	// Queue
	//Queue<Node<T>> *Q = new Queue<Node>(); 
	// Stack.t
	//Stack<Node<T>> *S = new Stack<Node>(); 
	Node<T> *Head = NULL;

public:
	List(T data);
	List();

	void addNode(T *data);
	void deleteNode();
	void printList();
	void printListBackwards();
	void log(T say);
	void stacker();
	T getStrings();

	~List();
};


template <class T>
 List<T>::~List()
{
}
 template <class T>
 List<T>::List()
{
} 
 template <class T>
 List<T>::List(T data)
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


}



//Adds a node to the end of the list
template <class T>
void List<T>::addNode(T *data)
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

//Searches for a value then deletes the Node that contains that value and sets the Next Pointer to the following Node
template <class T>
void List<T>::deleteNode()
{
	Node<T> *p = Head;

	//sets pointer to node that is going to get deleted
	 this->dequeue();
	this->pop();
	Node<T> *delPtr = p;

	Head = p->Next;
	Head->Next = p->Next->Next;


	delete delPtr;
}

//Cycles through and prints the entire list  
template <class T>
void List<T>::printList()
{
	Node<T> *p = Head;
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
	Node<T> *p = Head;
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
template<class T>
void List<T>::stacker()
{
	Node<T> *p = Head;
	while (p != nullptr && p->Next != NULL)
	{
		p = p->Next;
	}

	while (p != nullptr && p != NULL)
	{

		this->push(p);
		p = p->Prev;

	}
}

template<class T>
T List<T>::getStrings()
{
	/*T tmpQ = Q->dequeue();
	Node ref = new Node();

	T tmpS = S->peek(&ref);*/

	/*refQ = &tmpQ.;
	refS = &tmpS.Data;*/

	Node<T> *tmp = this->dequeue();
	string hope = tmp->Data;
	return tmp;
}
//Helper function. 
template <class T>
void List<T>::log(T say)
{
	cout << say << endl;
}
#endif
