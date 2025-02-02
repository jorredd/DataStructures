#pragma once
#include <string>


using std::string;

template<class T>
class LinkedList
{
public:
	LinkedList();
	LinkedList(T *node);
	void front(T *node);
	void rear(T *node);
	T deleteNode(string search);
	T find(T search);
	
protected:
	T *head;
	T *next;
	T *pointer;
};


template<class T>
LinkedList<T>::LinkedList(T *node)
{
	T ref = *node;
	this->head = &ref;
	node->next = NULL;
}

template<class T>
LinkedList<T>::LinkedList()
{
	T *tmp = new T();
	this->head = tmp;
	tmp->next = NULL;
}
//Function with the most issues... Failing to set the pointer
template<class T>
void LinkedList<T>::front(T *node)
{
	//Head is defined in the private data
	//section of the class
	if (this->head == NULL)
	{
		head = node;
		head->next = NULL;
	}
	else
	{

		pointer = head;

		node->next = pointer; // This was basically the biggest issue for me. "= cannot convert from T * TO t *" perhaps i should have overloaded this operator.
		this->head = node;
		




	}

}
template<class T>
void LinkedList<T>::rear(T *node)
{
	//Head is defined in the private data
	//Set p equal to the head
//section of the class
	if (head == NULL)
	{
		head = node;
	}
	else
	{
		T *pointer = this->head;

		while (pointer->next != NULL)
		{
			pointer = pointer->next;
		}

		//Create the new node
		T *n = new T();
		n->data = node;
		n->next = NULL;
	}

}
template<class T>
T LinkedList<T>::find(T search)
{
	T *pointer = this->head;

	while (pointer->next->data != search)
	{
		pointer->next;
	}
	
	return pointer->next;
}
template<class T>
T LinkedList<T>::deleteNode(string search)
{
	T *pointer = this->head;
	while (pointer->next->Data != search)
	{
		pointer = pointer->next;
	}

	T *delPtr = pointer->next;
	pointer->next = pointer->next->next;

	delete delPtr;
}