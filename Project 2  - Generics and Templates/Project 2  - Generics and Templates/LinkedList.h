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
	T *ref;
	ref = node;
	this->head = ref;
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
	//T *tmp = new T();
	//this->head = 
	//tmp->next = this->next;

	
	T *p = this->head;

	T *ref;
	ref = node;
	ref->next = p;

	p = ref;
	

	

}
template<class T>
void LinkedList<T>::rear(T *node)
{

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