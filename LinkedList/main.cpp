#include <iostream>
#include "Node.h"
#include "List.h"


int main() {
	Node* head = new Node();
	//head->Value = 1;
	//head->Next = second;
	//second->Value = 2;
	//second->Next = last;
	//last->Value = 3;
	//last->Next = NULL;

	//printLinkedList(head);

	List l;

	l.insertAtTheFront(&head, 1);
	l.insertAtTheFront(&head, 2);
	//l.insertAtTheFront(&head, 3);
	//l.insertAtTheFront(&head, 4);
	l.insertAfter(head, 40);
	l.insertAtTheEnd(&head, 30);
	l.insertAfter(head, 100);

	l.printLinkedList(head);
}	