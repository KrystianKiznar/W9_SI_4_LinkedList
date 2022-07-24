#pragma once
#include "Node.h"

class List
{
	Node* head = NULL;
	Node* second = NULL;
	Node* last = NULL;
public:
	List();
	void insertAtTheFront(Node** head, int newValue);
	void insertAtTheEnd(Node** head, int newValue);
	void insertAfter(Node* previous, int newValue);
	void printLinkedList(Node* n);
};

