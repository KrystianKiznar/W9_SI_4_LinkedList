#include <iostream>
#include "List.h"

void List::insertAtTheFront(Node** head, int newValue)
{
	Node* newNode = new Node();
	newNode->Value = newValue;

	newNode->Next = *head;

	*head = newNode;
}

void List::insertAtTheEnd(Node** head, int newValue)
{
	Node* newNode = new Node();
	newNode->Value = newValue;
	newNode->Next = NULL;

	if (*head == NULL) {
		*head = newNode;
		return;
	}
	Node* last = *head;
	while (last->Next != NULL) {
		last = last->Next;
	}
	last->Next = newNode;
}


void List::insertAfter(Node* previous, int newValue) {
	if (previous == NULL) {
		std::cout << "Previous can not be Null" << std::endl;
		return;
	}
	Node* newNode = new Node();
	newNode->Value = newValue;
	newNode->Next = previous->Next;
	previous->Next = newNode;
}

List::List()
{
	Node* head = new Node();
	Node* second = new Node();
	Node* last = new Node();
}

void List::printLinkedList(Node* n) {
	while (n != NULL) {
		std::cout << n->Value << std::endl;
		n = n->Next;
	}
}

