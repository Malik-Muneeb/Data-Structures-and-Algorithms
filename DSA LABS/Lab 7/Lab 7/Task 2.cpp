//#include<iostream>
//#include<ctime>
//using namespace std;
//
//class Node
//{
//public:
//	int data;
//	Node* next;
//	Node* prev;
//};
//
//class LinkedList
//{
//	Node* head;
//	Node* tail;
//public:
//	void CreateDoubleLinkedList();	// create double linked list of 5 nodes
//	void deteteNodeAt(int i);		// detele ith node from double linked lint
//	void Display();					// display element/nodes in double linked list
//	void Enqueue(int x);					//add an element in queue
//};
//
//void LinkedList::CreateDoubleLinkedList()
//{
//	srand(time(0));
//	Node* n = new Node;
//	n->data = rand() % 100;
//	n->next = NULL;
//	n->prev = NULL;
//	head = n;
//	for (int i = 1; i <= 4; i++)
//	{
//		Node* temp = new Node;
//		temp->data = rand() % 100;
//		temp->next = NULL;
//		temp->prev = n;
//		n->next = temp;
//		n = temp;
//
//	}
//	tail = n;
//}
//
//void LinkedList::Display()
//{
//
//	Node* temp = head;
//	cout << "\nDisplay List from head: ";
//	while (temp != NULL)
//	{
//		cout << temp->data << ", ";
//		temp = temp->next;
//	}
//	cout << "\n\n";
//
//	temp = tail;
//	cout << "\nDisplay List from tail: ";
//	while (temp != NULL)
//	{
//		cout << temp->data << ", ";
//		temp = temp->prev;
//	}
//	cout << "\n\n";
//}
//
//void LinkedList::deteteNodeAt(int i)
//{
//	int count = 1;
//	Node* temp = head;
//	bool isFound = false;
//	while (temp != NULL && !isFound)
//	{
//		if (count + 1 == i)
//		{
//			isFound = true;
//			if (temp->prev != NULL || temp->next != NULL)
//			{
//				temp->next = temp->next->next;
//				temp = temp->next;
//				temp->prev = temp->prev->prev;
//			}
//		}
//		++count;
//		temp = temp->next;
//	}
//}
//
//void LinkedList::Enqueue(int x)
//{
//	Node* n = new Node;
//	n->data = x;
//	n->next = NULL;
//	n->prev = tail;
//	tail->next = n;
//	tail = n;
//}
//
//int main()
//{
//	LinkedList list1;
//	cout << "\nCreate Double Linked List\n";
//	list1.CreateDoubleLinkedList();
//	list1.Display();
//	cout << "\nDelete Node at 3rd Index\n";
//	list1.deteteNodeAt(3);
//	list1.Display();
//	cout << "\nEnqueue 122\n";
//	list1.Enqueue(122);
//	list1.Display();
//	return 0;
//}