#pragma once
#include <iostream>
using namespace std;
class Node {
public:
	int value;
	Node* next;
	Node* prev;
};
void PrintDoublyLinkedList(Node*& head) {
	while (head != NULL) {
		cout << head->value << endl;
		head = head->next;
	}
}



void DoublyLinkedListImplementation()

{
	Node* head;

	Node* Node1 = NULL;
	Node* Node2 = NULL;
	Node* Node3 = NULL;

	// allocate 3 nodes in the heap
	Node1 = new Node();
	Node2 = new Node();
	Node3 = new Node();

	Node1->value = 1;
	Node1->prev = NULL;
	Node1->next = Node2;

	Node2->value = 2;
	Node2->prev = Node1;
	Node2->next = Node3;

	Node3->value = 3;
	Node3->prev = Node2;
	Node3->next = NULL;
	head = Node1;
}

