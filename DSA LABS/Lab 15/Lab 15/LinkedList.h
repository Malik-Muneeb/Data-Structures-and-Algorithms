#ifndef LinkedList_h
#define LinkedList_h

#include<iostream>
using namespace std;

class Node
{
public:
	int num;
	Node* next;
};

class LinkedList
{
	Node* head;
	Node* tail;
	int size;
public:
	LinkedList() { head = tail = NULL; size = 0; }
	void insertNode(int x);
	bool searchNode(int x);
	void displayResults();
};

void LinkedList::insertNode(int x)
{
	Node* n = new Node;
	n->num = x;
	n->next = NULL;
	if (head == NULL)
		head = tail = n;
	else
	{
		tail->next = n;
		tail = n;
	}
}

bool LinkedList::searchNode(int x)
{
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->num == x)
			return true;
		temp = temp->next;
	}
	return false;
}

void LinkedList::displayResults()
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->num << " ";
		temp = temp->next;
	}
}

#endif // !LinkedList_h
