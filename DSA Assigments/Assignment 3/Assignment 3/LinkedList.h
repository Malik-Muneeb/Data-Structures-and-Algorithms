#ifndef LinkedList_H
#define LinkedList_H

#include<iostream>
#include<string>
using namespace std;

class ListNode
{
public:
	string name;
	int count;
	ListNode* next;
	ListNode()
	{
		name = "";
		count = 0;
		next = NULL;
	}
};

class LinkedList
{
	ListNode* head;
	ListNode* tail;
	int size;
public:
	LinkedList() { head = tail = NULL; size = 0; }
	void insertListNode(string name);
	bool searchListNode(string name);
	bool countoccurences(string name);
	void display();
	void sortList();
	ListNode* getHead() { return head; }
};

void LinkedList::insertListNode(string name)
{
	ListNode* n = new ListNode;
	n->name = name;
	n->count++;
	if (head == NULL)
		head = tail = n;
	else
	{
		tail->next = n;
		tail = n;
	}
}

bool LinkedList::countoccurences(string name)
{
	ListNode* temp = head;
	while (temp != NULL)
	{
		if (temp->name == name)
		{
			temp->count++;
			return true;
		}
		temp = temp->next;
	}
	return false;
}

bool LinkedList::searchListNode(string name)
{
	ListNode* temp = head;
	while (temp != NULL)
	{
		if (temp->name == name)
			return true;
		temp = temp->next;
	}
	return false;
}

void LinkedList::display()
{
	ListNode* temp = head;
	cout << "\nCount\t\t\t" << "Name\n";
	while (temp != NULL)
	{
		cout << temp->count << "\t\t\t" << temp->name << "\n";
		temp = temp->next;
	}
}

void LinkedList::sortList()
{
	for (ListNode* temp = head; temp->next != NULL; temp = temp->next)
	{
		for (ListNode* temp1 = temp->next; temp1 != NULL; temp1 = temp1->next)
		{
			if (temp->count < temp1->count)
			{
				swap(temp->name, temp1->name);
				swap(temp->count, temp1->count);
			}
				
		}
	}
}

#endif // !LinkedList_H