#include"Linked List.h"


void LinkedList::insertAtHead(int value)
{
	Node* n = new Node;
	n->data = value;
	n->next = head;
	head = n;
	if (tail == NULL)
		tail = head;
	++size;
}

void LinkedList::insertAtTail(int value)
{
	Node *n = new Node;
	n->data = value;
	tail->next = n;
	tail = n;
	++size;
}

void LinkedList::insert(int value, int i)
{
	Node* n = new Node;
	n->data = value;
	while (i < 0 || i>size)
	{
		cout << "\nError! Only " << size << " Node existed. Enter from 1-" << size << ": ";
		cin >> i;
	}
	Node* temp = head;
	int count = 1;
	while (temp != NULL && count!=i)
	{
		++count;
		if(i!=count)
			temp = temp->next;
	}
	n->next = temp->next;
	temp->next = n;
	++size;
}


void LinkedList::deleteFromHead()
{
	Node* temp = head;
	temp = temp->next;
	delete head;
	head = temp;
	--size;
}

void LinkedList::deleteFromTail()
{
	Node* temp = head;
	bool isFoundTail = false;
	while (temp!= NULL && !isFoundTail)
	{
		temp = temp->next;
		if (temp->next == tail)
			isFoundTail = true;
	}
	temp->next = NULL;
	tail = temp;
	--size;
}


void LinkedList::deleteFromTail(int i)
{
	while (i<0 || i>size)
	{
		cout << "\nExceed boundry ! you have only " << size << " nodes\n";
		cout << "Enter again: ";
		cin >> i;
	}
	int index = size - i + 1;
	int counter = 1;
	Node* temp = head;
	Node* pre=NULL;
	while (counter != index)
	{
		if (counter == index - 1)
		{
			pre = temp;
		}
		temp = temp->next;
		counter++;
	}
	pre->next = temp->next;
}


void LinkedList::display()
{
	Node* temp = head;
	cout << "\n\n\nDisplay List\n";
	while (temp!=NULL)
	{
		cout << temp->data << " ";
		temp= temp->next;
	}
	cout << "\n\n\n";
}