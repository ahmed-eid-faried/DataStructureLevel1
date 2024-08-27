#pragma once
#include <iostream>
using namespace std;
template <class T>
class Node {
public:
	T value;
	Node* next;
	Node* prev;
};

void PrintDoublyLinkedList(Node<int>*& head) {
	while (head != NULL) {
		cout << head->value << endl;
		head = head->next;
	}
}



void DoublyLinkedListImplementation()

{
	Node<int>* head;

	Node<int>* Node1 = NULL;
	Node<int>* Node2 = NULL;
	Node<int>* Node3 = NULL;

	// allocate 3 nodes in the heap
	Node1 = new Node<int>();
	Node2 = new Node<int>();
	Node3 = new Node<int>();

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
	PrintDoublyLinkedList(head);
}

