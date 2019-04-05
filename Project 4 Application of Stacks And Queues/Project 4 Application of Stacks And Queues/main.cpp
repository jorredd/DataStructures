//reference this bottom of pag https://msjc.instructure.com/courses/12622/pages/lecture-3f-queues-c++
#include "List.h"
#include "Queue.h"
#include <iostream>
#include <string>
//#include "Node.h"

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
void writeFile(string fileName, List<string> *lines);

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
	string *sptr = new string();
		string *ssptr = new string();
	obj->getItems(sptr, ssptr);

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
		log("Error opening file for reading");
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
	lines->stacker();
	log("File Parsed Successfully");
	infile.close();
}

void writeFile(string fileName, List<string> *lines)
{
	 //Create an instance of ofstream and open example.txt 
    ofstream outfile(fileName + ".txt");

    //Make sure the file was opened
    if(!outfile)
    {
        log("Error opening file ");
        exit(0);
    }

    //output text to the file
    outfile << "This text will no be inside of example.txt" << endl;
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