#include"Linked List.h"

int main()
{
	LinkedList list;
	list.insertAtHead(-2);
	list.insertAtHead(-8);
	list.display();
	list.insertAtTail(10);
	list.display();
	list.insert(100, 2);
	list.display();
	list.deleteFromHead();
	list.display();
	list.deleteFromTail();
	list.display();
	list.deleteFromTail(1);
	list.display();
	return 0;
}