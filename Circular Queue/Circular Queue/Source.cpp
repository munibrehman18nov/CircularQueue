#include "Cqueue.h"
#include<iostream>
using namespace std;
int main()
{
	Cqueue q(8);
//	q.showStructure();
	q.Enqueue(1);
	q.Enqueue(2);
	q.Enqueue(3);
	q.Enqueue(4);
	q.Enqueue(5);
	q.Dequeue();
	q.Dequeue();
	q.Enqueue(6);
	q.Enqueue(7);
	q.Enqueue(8);
	q.Dequeue();
	q.Enqueue(9);
	q.Enqueue(10);
	q.Enqueue(11);
	q.Dequeue();
	q.Enqueue(12);
	q.Enqueue(13);

//	cout << endl;
	q.showStructure();
	q.~Cqueue();
}