#pragma once
#include <string>
//test to see if commit are working proerlly

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

template<class T>
void LinkedList<T>::front(T *node)
{
	//Head is defined in the private data
	//section of the class
	if (this->head == NULL)
	{

		T ref = &node;
		this->head = node;
		ref.next = this->next;
		//create bew bide
		T *tmp;
		tmp = node;
		node.next = this->next;
	}
	else
	{


		
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