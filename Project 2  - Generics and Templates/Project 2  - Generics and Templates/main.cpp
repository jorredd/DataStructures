#include "LinkedList.h"
#include "Pair.h"
#include <iostream>

using namespace std;


int main()
{
	Pair<int> test(1, 3);
	//Pair<int> test2(25, 40);
	//Pair<int> test3(58, 69);
	cout << test.getFirst() << endl;

	Pair<int> *ptr = &test;
	//Pair<int> *ptr2 = &test2;
	//Pair<int> *ptr3 = &test3;

	LinkedList<Pair<int>>testList(ptr);
	LinkedList<Pair<int>>emptyList();

	//testList.front(ptr2);
	//testList.front(ptr3);

	return 0;
}