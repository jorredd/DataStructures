#include "LinkedList.h"
#include "Pair.h"
#include <iostream>
// So for this project, i couldnt manage to get the next pointer for the third objects reference to be saved in the *next for the second. I had it only working for adding one item to the list.
// im going to have to figure all of this out by next week since were doing doubly linked list but this assignment is grossly incomplete.
using namespace std;


int main()
{
	Pair<int> test(1, 3);
	Pair<int> test2(25, 40);
	Pair<int> test3(58, 69);
	cout << test.getFirst() << endl;

	Pair<int> *ptr = &test;
	Pair<int> *ptr2 = &test2;
	Pair<int> *ptr3 = &test3;

	LinkedList<Pair<int>>testList(ptr);

	testList.front(ptr2);
	testList.front(ptr3);

	return 0;
}