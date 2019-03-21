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

//string readFile(string fileName);
void parseFile(string fileName, List<string> *lines = nullptr);

int main()
{
	// What i need to do for the project... Grab from the file and parse through the strings akin to this;
	string test = "this is a test";
	char grab = test[1];
	cout << grab << endl;

	List<string> *obj = new List<string>();

	parseFile("pal", obj);

	obj->printList();
	log("===================================");
	obj->printListBackwards();

	return 0;
}

//displays contents of a file if given file name and adds file to list if given a List object
void parseFile(string fileName, List<string> *lines)
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

	char input[200];
	while (infile.getline(input, 200))
	{
		if (lines != nullptr)
		{
			for (int c = 0; c < 200; c++)  input[c] = tolower(input[c]);
			lines->addNode(input);
		}
	}
	log("File Parsed Successfully");
	infile.close();
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