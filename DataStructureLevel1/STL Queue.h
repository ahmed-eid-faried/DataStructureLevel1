#pragma once
#include <queue>
#include <iostream>
using namespace std;

void PrintQueue(queue<int> MyQueue) {
	while (!MyQueue.empty()) {
		cout << MyQueue.front() << " ";
		MyQueue.pop();
	}
	cout << endl;
}

void STLQueueEx()
{
	queue <int> MyQueue;
	MyQueue.push(1);
	MyQueue.push(12);
	MyQueue.push(123);
	MyQueue.push(1234);
	MyQueue.push(12345);
	cout << endl;
	cout << "size: " << MyQueue.size() << endl;
	cout << "front: " << MyQueue.front() << endl;
	cout << "back: " << MyQueue.back() << endl;

	cout << "\nMyQueue = ";
	PrintQueue(MyQueue);
}