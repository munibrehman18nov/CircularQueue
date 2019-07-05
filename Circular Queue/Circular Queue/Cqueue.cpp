#include "Cqueue.h"
#include<iostream>
using namespace std;

//template <typename T>
Cqueue::Cqueue(int s) :MAX_SIZE(s)
{
	data = new int[s];
	front = -1;
	rear = -1;
	noe = 0;
}
//template <typename T>
Cqueue::~Cqueue()
{
	delete[]data;
	data = nullptr;
}
//template <typename T>
void Cqueue::Enqueue(int val)
{
	if (!isFull())
	{
		rear++;
		rear = (rear) % MAX_SIZE;
		data[rear] = val;
		noe++;
	}
}
//template <typename T>
void Cqueue::Dequeue()
{
	if (!isEmpty())
	{
		front++;
		front = (front) % MAX_SIZE;
		noe--;
	}
}
//template <typename T>
void Cqueue::clear()
{
	front = -1;
	rear = -1;
}
//template <typename T>
bool Cqueue::isEmpty()
{
	if (noe==0)
		return true;
	return false;
}
//template <typename T>
bool Cqueue::isFull()
{
	if (noe == MAX_SIZE)
		return true;
	return false;
}
//template <typename T>
int Cqueue::peek()
{
	if (!isEmpty())
		return data[(rear + 1) % MAX_SIZE];
	return -5;
}
//template <typename T>
void Cqueue::showStructure()
{
	int el = noe;
	if (!isEmpty())
	{
		if (front <= rear || el != 0)
		{
			int i = 0;
			for (i = front; i <= rear; i++)
			{
				cout << "|" << data[i] << "|" << endl;
				el--;
			}
			if (el != 0)
			{
				int i = 0;
				for (i = front + 1; i < MAX_SIZE; i++)
				{
					cout << "|" << data[i] << "|" << endl;
					el--;
				}
				if (el != 0)
				{
					for (i = 0; i < rear; i++)
					{
						cout << "|" << data[i] << "|" << endl;
						el--;
					}
				}
			}
		}
		else if (front > rear)
		{
			int i = 0;
			for (i = (front - 1); i < MAX_SIZE; i++)
			{
				cout << "|" << data[i] << "|" << endl;
			}
			for (i = 0; i <= rear; i++)
			{
				cout << "|" << data[i] << "|" << endl;
			}
		}
	}
	else
	{
		cout << "Empty Queue.";
	}
}