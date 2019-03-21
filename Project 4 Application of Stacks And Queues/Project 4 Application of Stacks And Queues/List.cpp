//#include "List.h"
//#include <string>
//#include <iostream>
//
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//
////List::List()
////{
////}
////
////
////List::~List()
////{
////}
//////Adds a node to the end of the list
////void List::addNode(string data)
////{
////	//Head is defined in the private data
//////section of the class
////	if (Head == NULL)
////	{
////		Head = new Node;
////		Head->Data = data;
////		Head->Next = NULL;
////		Head->Prev = NULL;
////	}
////	else
////	{
////		//Set A Pointer equal to the head
////		Node *p = Head;
////
////		//Create the new node
////		Node *n = new Node;
////		n->Data = data;
////		n->Next = NULL;
////
////		//Traverse to the end of the list
////		while (p->Next != NULL)
////		{
////			p = p->Next;
////		}
////		//Assign the next pointer to the new node
////		p->Next = n;
////		n->Prev = p;
////	}
////};
////
//////Where String Search is the nodes data you want to search by and String Value is the data you want to add into the new node that comes AFTER your searched value
////void List::insertAfter(string search, string value)
////{
////	Node *p = Head;
////	int count = 0;
////	while (p->Data != search)
////	{
////		if (p->Next == NULL)
////		{
////			log("Error Not Found");
////			return;
////		}
////
////		p = p->Next;
////		count++;
////	}
////
////	Node *n = new Node;
////	n->Data = value;
////	n->Next = p->Next;
////
////	p->Next = n;
////
////};
////
//////Searches for a value then deletes the Node that contains that value and sets the Next Pointer to the following Node
////void List::deleteNode(string search)
////{
////	Node *p = Head;
////	while (p->Next->Data != search)
////	{
////		p = p->Next;
////	}
////	//sets pointer to node that is going to get delted
////	Node *delPtr = p->Next;
////	p->Next = p->Next->Next;
////
////	delete delPtr;
////}
////
//////Cycles through and prints the entire list  
////void List::printList()
////{
////	Node *p = Head;
////	while (p != NULL)
////	{
////		log(p->Data);
////		p = p->Next;
////	}
////}
////
//////Cycles through and prints the entire list  
////void List::printListBackwards()
////{
////	Node *p = Head;
////	while (p->Next != NULL)
////	{
////		p = p->Next;
////	}
////
////	while (p != NULL)
////	{
////		log(p->Data);
////		p = p->Prev;
////	}
////}
//////Helper function. Reduces input for COUTS
////void List::log(string say)
////{
////	cout << say << endl;
////};