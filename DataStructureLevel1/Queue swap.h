#pragma once
#include <queue>
#include <iostream>
using namespace std;

//void PrintQueue(queue<int> MyQueue) {
//	while (!MyQueue.empty()) {
//		cout << MyQueue.front() << " ";
//		MyQueue.pop();
//	}
//}
void QueueSwap()
{
	queue <int> MyQueue1;
	queue <int> MyQueue2;
	cout << "==============================================" << endl;
	cout << "                     Swap                     " << endl;
	MyQueue1.push(1);
	MyQueue1.push(11);
	MyQueue1.push(111);
	MyQueue1.push(1111);
	MyQueue1.push(11111);

	MyQueue2.push(2);
	MyQueue2.push(22);
	MyQueue2.push(222);
	MyQueue2.push(2222);
	MyQueue2.push(22222);

	PrintQueue(MyQueue1);
	PrintQueue(MyQueue2);

	MyQueue1.swap(MyQueue2);

	PrintQueue(MyQueue1);
	PrintQueue(MyQueue2);
}