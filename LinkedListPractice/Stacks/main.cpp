#include "Stack.h"
#include <string>
#include <iostream>

void log(std::string say);
void log(int say);
int main()
{

	Stack *numbers = new Stack();
	
	numbers->push(15);
	numbers->push(1);
	numbers->push(12);
	numbers->push(10);
	int peekIn = numbers->peek();
	log(peekIn);

return 0;
}

void log(std::string say)
{
	std::cout << say << std::endl;
};
void log(int say)
{
	std::cout << say << std::endl;
};