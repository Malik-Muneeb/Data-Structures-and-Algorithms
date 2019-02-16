//#include<iostream>
//using namespace std;
//
//
//class Node
//{
//public:
//	int data;
//	Node* next;
//};
//
//class Queue
//{
//	Node* front;
//	Node* rear;
//
//public:
//	Queue() { front = rear = NULL; }
//	bool IsEmpty();					//Check if queue is empty.
//	void Clear();					//Clear the queue.
//	void EnQueue(int element);		//Add an item to the end of the queue.
//	void DeQueue();					// Get an item from the front of the queue.
//	void GetFirstNode();			//Get an item from the front of the queue without removing it
//};
//
//
//
//bool Queue::IsEmpty()
//{
//	if (front == NULL)
//		return true;
//	return false;
//}
//
//void Queue::Clear()
//{
//	Node* temp = front;
//	while (temp!= NULL)
//	{
//		front = temp;
//		temp = temp->next;
//		delete front;
//		front = NULL;
//	}
//}
//
//void Queue::EnQueue(int element)
//{
//	if (front == NULL)
//	{
//		Node* n = new Node;
//		n->data = element;
//		n->next = NULL;
//		front = n;
//		rear = front;
//	}
//	else
//	{
//		Node* n = new Node;
//		n->data = element;
//		n->next = NULL;
//		rear->next = n;
//		rear = n;
//	}
//}
//
//void Queue::DeQueue()
//{
//	if (front != NULL)
//	{
//		Node* temp = new Node;
//		if (front->next != NULL)
//			temp = front->next;
//		cout << "\nDequeue...First element on queue is: " << front->data << "\n";
//		delete front;
//		front = temp;
//	}
//	else
//		cout << "\nQueue is Empty\n";
//}
//
//void Queue::GetFirstNode()
//{
//	cout << "First element on queue is: " << front->data << "\n";
//}
//
//
//int main()
//{
//	Queue q;
//	q.EnQueue(15);
//	q.EnQueue(20);
//	q.EnQueue(25);
//	if (q.IsEmpty())
//		cout << "\nQueue is Empty.\n";
//	else
//		cout << "\nQueue is not Empty.\n";
//	q.DeQueue();
//	q.DeQueue();
//	q.EnQueue(40);
//	q.GetFirstNode();
//	q.DeQueue();
//	q.GetFirstNode();
//	q.Clear();
//	if (q.IsEmpty())
//		cout << "\nQueue is Empty.\n";
//	else
//		cout << "\nQueue is not Empty.\n";
//	return 0;
//}