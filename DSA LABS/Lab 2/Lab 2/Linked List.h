#ifndef LINKEDLIST
#define LINKEDLIST

#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node()
	{
		data = 0;
		next = NULL;
	}
};

class LinkedList
{
	Node* head;
	Node* tail;
    int size;
public:
	LinkedList()
	{
		head = NULL;
		tail = NULL;
		size = 0;
	}
	void insertAtHead(int value);	//function that add a node at the start of linked list.
	void insertAtTail(int value);	//function that add a node at the end of linked list.
	void insert(int value, int i);	//function that add a node at ith index of linked list.
	void deleteFromHead();			//function that remove a node from start of linked list.
	void deleteFromTail();			//function that remove a node from end of linked list.
	void deleteFromTail(int i);		//function that remove ith node from linked list.
	void display();					//function that display al nodes in linked list.

};

#endif // !LINKEDLIST
