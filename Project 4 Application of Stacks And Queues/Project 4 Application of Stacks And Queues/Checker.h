#ifndef CHECKER
#define CHECKER
#pragma once

#include "List.h"
#include <string>
#include <istream>
#include <ostream>
using std::ifstream;
using std::ofstream;
using std::string;
using std::cout;
using std::cin;
using std::end;

template <class T>
class Checker
{
public:
	Checker(string name);
	//Data
	T data;
	Node<T> *node = new Node<T>();
	void builder(string name);

	//string readFile(string fileName);
	void parseFile(string fileName, List<Node<T>>  *lines = nullptr);
	void writeFile(string fileName, List<T> *lines);
	T getStrings(T *refQ, T *refS);

	void log(T say);
	void log(char say);
	~Checker();
};

template <class T>
Checker<T>::Checker(string name)
{
	builder(name);
}
template<class T>
void Checker<T>::builder(string name)
{
	
	List<Node<T>> *obj = new List<Node<T>>();
	parseFile(name, obj);
	//node = obj->dequeue();

	//obj->printList();
	//log("===================================");
	//obj->printListBackwards();
};


template <class T>
Checker<T>::~Checker()
{
};

//displays contents of a file if given file name and adds file to list if given a List object
 
template <class T>
void Checker<T>::parseFile(string fileName, List<Node<T>> *lines)
{


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
			Node<T> *inserts = new Node<T>();
			inserts->addNode(input);
			lines->addNode(inserts);
		}
	}
	lines->stacker();
	log("File Parsed Successfully");
	infile.close();
}

template <class T>
void Checker<T>::writeFile(string fileName, List<T> *lines)
{
	//Create an instance of ofstream and open example.txt 
	ofstream outfile(fileName + ".txt");

	//Make sure the file was opened
	if (!outfile)
	{
		log("Error opening file ");
		exit(0);
	}

	//output text to the file
	outfile << "This text will no be inside of example.txt" << endl;
}


template<class T>
T  Checker<T>::getStrings(T *refQ, T *refS)
{
	//	T tmpQ = Q->dequeue();
	//	Node ref = new Node(); this is a test to see if im right
	//	Node ref = new Node(); this is a test to see if im right
	//
	//	T tmpS = S->peek(&ref);
	


	return "success";
}
//Helper function. Reduces input for COUTS
template <class T>
void Checker<T>::log(T say)
{
	cout << say << endl;
};
template <class T>
void Checker<T>::log(char say)
{
	cout << say << endl;
};


#endif // !CHEKCER