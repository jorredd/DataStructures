
//Remember in this shitty example he gives us the head is in the global scope so this is why we can access it like this In my linked list class i can have Head in the Private DATA and set it to NUll when i create the class
#include <string>
#include <iostream>

using namespace std;

struct  Node
{
	//Head
	string Data;
	//Reference to Next Node
	Node *Next;
	//Reference to the Prev Node
	Node *Prev;
};

Node *Head = NULL;
void addNode(Node *Head, string data);
void insertAfter(string search, string value, Node *Head);
void deleteNode(string search, Node *Head);
void printList(Node *Head);
void printListBackwards(Node *Head);
void log(string say);

int main()
{
	//First Node
	Node *Head = new Node;
	Head->Data = "This is the Head";
	Head->Next = NULL;
	Head->Prev = NULL;

	string ONE = "ONE";
	string TWO = "TWO";
	string THREE = "THREE";
	string FOUR = "FOUR";


	addNode(Head, ONE);
	addNode(Head, TWO);
	addNode(Head, THREE);
	addNode(Head, FOUR);

	printList(Head);
	log("");
	printListBackwards(Head);

	return 0;
};

//Adds a node to the end of the list
void addNode(Node *Head, string data)
{
	//Head is defined in the private data
//section of the class
	if (Head == NULL)
	{
		Head = new Node;
		Head->Data = data;
		Head->Next = NULL;
		Head->Prev = NULL;
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
	}
};

//Where String Search is the nodes data you want to search by and String Value is the data you want to add into the new node that comes AFTER your searched value
void insertAfter(string search, string value, Node *Head)
{
	Node *p = Head;
	int count = 0;
	while (p->Data != search)
	{
		if (p->Next == NULL)
		{
			log("Error Not Found");
			return;
		}

		p = p->Next;
		count++;
	}

	Node *n = new Node;
	n->Data = value;
	n->Next = p->Next;

	p->Next = n;

};

//Searches for a value then deletes the Node that contains that value and sets the Next Pointer to the following Node
void deleteNode(string search, Node *Head)
{
	Node *p = Head;
	while (p->Next->Data != search)
	{
		p = p->Next;
	}
	//sets pointer to node that is going to get delted
	Node *delPtr = p->Next;
	p->Next = p->Next->Next;

	delete delPtr;
}

//Cycles through and prints the entire list  
void printList(Node *Head)
{
	Node *p = Head;
	while (p != NULL)
	{
		log(p->Data);
		p = p->Next;
	}
}

//Cycles through and prints the entire list  
void printListBackwards(Node *Head)
{
	Node *p = Head;
	while (p->Next != NULL)
	{
		p = p->Next;
	}

	while (p != NULL)
	{
		log(p->Data);
		p = p->Prev;
	}
}
//Helper function. Reduces input for COUTS
void log(string say)
{
	cout << say << endl;
};