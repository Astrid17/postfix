//should contain the prototypes of the stack
//pop
//push
//Klasse Stack hat alle methoden die wir brauchen zu berechnen
#ifndef STACK
#define SIZE 10
#include <iostream>
#include "node.h"

using namespace std;
class Stack
{

	int top;
	int capacity;

  public:
	Stack(int size = SIZE);
	Node *hauptknote = nullptr;
	void push (string);
	int pop();
	int size();
	bool isEmpty();
	bool isfull();
	int rechnen(int z, int b, string s);
};

#endif