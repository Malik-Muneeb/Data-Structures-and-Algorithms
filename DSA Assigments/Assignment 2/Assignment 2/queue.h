#ifndef QUEUE_H
#define QUEUE_H

#include<iostream>
using namespace std;

class Node			//space 8 byte
{
public:
	int data;
	Node* next;
};

class Queue		//space 12 byte
{
	Node *front;
	Node *rear;
	int size;
public:
	Queue() { front = rear = NULL; size = 0; }
	void enqueue(int element);
	int dequeue();
	bool isEmpty()
	{
		if (front == NULL)
			return true;
		return false;
	}
	int sizeOfQueue() { return size; }
};

void Queue::enqueue(int element)
{
	Node* n = new Node;
	n->data = element;
	n->next = NULL;
	if (front == NULL)
	{
		front = n;
		rear = front;
	}
	else
	{
		rear->next = n;
		rear = n;
	}
	++size;
}

int Queue::dequeue()
{
	int element;
	if (front != NULL)
	{
		Node* temp = new Node;
		temp = NULL;
		if (front->next != NULL)
			temp = front->next;
		element = front->data;
		delete front;
		if (temp == NULL)
			front = NULL;
		else
			front = temp;
		--size;
		return element;
	}
	else
		return NULL;
}

#endif // !QUEUE_H
