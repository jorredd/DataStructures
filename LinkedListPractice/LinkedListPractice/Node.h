#pragma once
#include <string>

using namespace std;

class cNode
{
public:
	//Head
	string Data;
	//Reference to Next Node
	cNode *Next;


	cNode();
	cNode(string data, cNode &nextNode);

	~cNode();
};

