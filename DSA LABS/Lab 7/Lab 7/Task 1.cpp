//#include<iostream>
//#include<ctime>
//#include<Windows.h>		//to use sleep function
//using namespace std;
//
//class Node
//{
//public:
//	int data;
//	Node* next;
//};
//
//class LinkedList
//{
//	Node* head;
//public:
//	LinkedList() { head = NULL; }
//	void CreateList();
//	void InsertAt(int x, int i);
//	void SortList();
//	bool CompareList(LinkedList x);
//	void ReverseList();
//	void Display();
//	void Push(int x);
//};
//
//void LinkedList::CreateList()
//{
//	srand(time(0));
//	Node* temp = new Node;
//	temp->data = rand() % 100;
//	temp->next = NULL;
//	head = temp;
//	for (int i = 1; i <= 4; i++)
//	{
//		Node *temp1 = new Node;
//		temp1->data = rand() % 100;
//		temp1->next = NULL;
//		temp->next = temp1;
//		temp = temp1;
//	}
//}
//
//void LinkedList::InsertAt(int x, int i)
//{
//	Node* n = new Node;
//	n->data = x;
//	n->next = NULL;
//	Node *temp = head;
//	int count = 0;
//	bool isFound = false;
//	while (temp != NULL && !isFound)
//	{
//		if (count + 2 == i)
//		{
//			n->next = temp->next;
//			temp->next = n;
//			isFound = true;
//		}
//		temp = temp->next;
//		++count;
//	}
//}
//
//void LinkedList::SortList()
//{
//	for (Node* temp = head; temp->next != NULL; temp = temp->next)
//	{
//		for (Node* temp1 = temp->next; temp1 != NULL; temp1 = temp1->next)
//		{
//			if (temp->data > temp1->data)
//				swap(temp->data, temp1->data);
//		}
//	}
//}
//
//bool LinkedList::CompareList(LinkedList list1)
//{
//	Node* temp = head;
//	Node* temp1 = list1.head;
//	while (temp != NULL)
//	{
//		if (temp->data != temp1->data)
//			return false;
//		temp = temp->next;
//		temp1 = temp1->next;
//	}
//	return true;
//}
//
//void LinkedList::ReverseList()
//{
//	Node* temp = head;
//	Node* placeNull = temp;	//to place null at end
//	head = head->next;
//	Node* temp1 = new Node;
//	bool traverse = true;
//	while (traverse)
//	{
//		traverse = false;
//		if (head->next != NULL)
//		{
//			temp1 = head->next;
//			traverse = true;
//		}
//		head->next = temp;
//		temp = head;
//		head = temp1;
//	}
//	placeNull->next = NULL;
//}
//
//void LinkedList::Display()
//{
//	Node* temp = head;
//	cout << "\nContents: ";
//	while (temp != NULL)
//	{
//		cout << temp->data << ", ";
//		temp = temp->next;
//	}
//	cout << "\n\n";
//}
//
//void LinkedList::Push(int x)
//{
//	Node* temp = new Node;
//	temp->data = x;
//	temp->next = head;
//	head = temp;
//}
//
//int main()
//{
//	LinkedList list1;
//	cout << "\nCreate List 1\n";
//	list1.CreateList();
//	list1.Display();
//	cout << "\nInsert 125 at 3rd index\n";
//	list1.InsertAt(125, 3);
//	list1.Display();
//	cout << "\nSort List 1\n";
//	list1.SortList();
//	list1.Display();
//
//	Sleep(400);			//random function generating same value when it used after short 
//						//interval of time....sleep(400) produces delay of 0.4 seconds and
//						//then it generates different number;
//	LinkedList list2;
//	cout << "\nCreate List 2\n";
//	list2.CreateList();
//	list2.Display();
//	cout << "\nCompare list 1 and list 2\n";
//	if (list1.CompareList(list2))
//		cout << "\nSame Lists.\n";
//	else
//		cout << "\nDifferent Lists.\n";
//	cout << "\nReverse List 2\n";
//	list2.ReverseList();
//	list2.Display();
//	cout << "\nPush 150 at list 2\n";
//	list2.Push(150);
//	list2.Display();
//	return 0;
//}