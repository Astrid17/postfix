//should contain the implementation of the stack

#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack(int size)
{
    capacity = size;
    top = -1;
}

void Stack::push(string pushWert)
{

    Node *neueKnot = new Node();

    //Neue Tasse zeigt auf was der hauptpointer zeigt

    neueKnot->nextKnot = this->hauptknote;
    //Hauptpointer zeigt auf den neue knote

    //Hauptknote wird auf die Adresse des neue erstellten Knoten zugewiesen
    neueKnot->nodeWert = pushWert;
    // cout << "Es war in push methode" << endl;
    this->hauptknote = neueKnot;
}

int Stack::pop()
{
    // cout << "popped" << endl;
    string popValue = this->hauptknote->nodeWert;
    Node *neuePointer = this->hauptknote->nextKnot;
    delete hauptknote;
    this->hauptknote = neuePointer;

    return stoi(popValue);
}

int Stack::rechnen(int z1, int z2, string c)
{
    int result;
    if (c == "+")
    {
        // cout << "Addition!" << endl;
        result = z1 + z2;
    }
    else if (c == "-")
    {
        // cout << "Sub" << endl;
        result = z2 - z1;
    }
    else if (c == "*")
    {
        // cout << "Mult!" << endl;
        result = z1 * z2;
    }
    else if (c == "/")
    {
        // cout << "div!" << endl;
        result = z2 / z1;
    }
    else if (c == "%")
    {
        // cout << "mod!" << endl;
        result = z2 % z1;
    }

    return result;
}