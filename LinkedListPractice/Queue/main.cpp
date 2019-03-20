#include "Queue.h"
#include <string>


int main()
{
	Queue *test = new Queue();

	test->enqueue(69);
	test->enqueue(12);
	test->enqueue(99);
	test->enqueue(6);
	test->enqueue(2);
	test->enqueue(91);
	
	test->peek();



	return 0;
}