//reference this bottom of pag https://msjc.instructure.com/courses/12622/pages/lecture-3f-queues-c++
#include "List.h"
#include "Queue.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

template <class T>
void log(T say);

void log(char say);

string readFile(string fileName);
int main()
{
	// What i need to do for the project... Grab from the file and parse through the strings akin to this;
	string test = "this is a test";
	char grab = test[1];
	cout << grab << endl;

	List *obj = new List();


	obj->addNode("this");
	obj->addNode("that");
	obj->addNode("pattywack!");
	obj->printList();
	log("===================================");
	string payload = readFile("pal");
	log("===================================");
	log(payload.at(16));

	return 0;
}
string readFile(string fileName)
{
	#include <istream>
	#include <ostream>
	using std::ifstream;
	using std::ofstream;

	ifstream infile(fileName + ".txt");
	if (!infile)
	{
		cout << "Error opening file for reading" << endl;
		exit(-1);
	}

	string input;

	while (getline(infile, input))
	{
		Queue *content = new Queue();
		content->enqueue(input);
		log(input);
	}
	infile.close();
	return input;
}

//Helper function. Reduces input for COUTS
template <class T>
void log(T say)
{
	cout << say << endl;
};
void log(char say)
{
	cout << say << endl;
};