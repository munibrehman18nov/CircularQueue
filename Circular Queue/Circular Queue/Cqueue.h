#ifndef Cqueue_H
#define Cqueue_H

//template <typename T>
class Cqueue
{
	int *data;
	int front;
	int rear;
	int MAX_SIZE;
	int noe;
public:
	Cqueue(int = 5);
	~Cqueue();
	void Enqueue(const int);
	void Dequeue();
	void clear();
	bool isEmpty();
	bool isFull();
	int peek();
	void showStructure();
};

#endif