//#include<iostream>
//using namespace std;
//
//class Node
//{
//public:
//	int data;
//	Node* next;
//};
//
//class MyStack
//{
//	Node* top;			//points to top element of stack
//	int size;			//max size
//	int count;			//count data
//	int element;		//last store element
//public:
//	MyStack(int s);
//	void pop();
//	void push(int element);
//	bool isEmpty();
//	bool isFull();
//	void print();
//	int peek();
//	int getStackSize();
//};
//
//MyStack::MyStack(int s)
//{
//	top = NULL;
//	size = s;
//	count = 0;
//	element = 0;
//}
//
//
//void MyStack::push(int num)
//{
//	if (count <= size)
//	{
//		if (top == NULL)
//		{
//			Node* n = new Node;
//			n->data = num;
//			n->next = NULL;
//			top = n;
//		}
//		else
//		{
//			Node* n = new Node;
//			n->data = num;
//			n->next = top;
//			top = n;
//		}
//		element = num;
//		++count;
//	}
//	else
//		cout << "\nStack is full ! \n";
//}
//
//void MyStack::pop()
//{
//	if (count == 0)
//	{
//		cout << "\nError! No data to pop...\n";
//	}
//	else
//	{
//		Node* temp = top->next;
//		if (top->next == NULL)
//			element = top->data;
//		else
//			element = top->next->data;
//		delete top;
//		top = temp;
//		--count;
//	}
//}
//
//bool MyStack::isEmpty()
//{
//	if (count != 0)
//		return false;
//	return true;
//}
//
//bool MyStack::isFull()
//{
//	if (count == size)
//		return true;
//	return false;
//}
//
//int MyStack::peek()
//{
//	return element;
//}
//
//int MyStack::getStackSize()
//{
//	return count;
//}
//
//void MyStack::print()
//{
//	if (count == 0)
//		cout << "\nError! No list to display...\n";
//	else
//	{
//		Node* temp = top;
//		cout << "Contents: ";
//		while (temp != NULL)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//		cout << endl;
//	}		
//}
//
//
//
//int main()
//{
//	MyStack stack(10);
//	stack.push(50);
//	stack.push(4);
//	stack.push(890);
//	stack.push(25);
//	stack.print();
//	cout << " Peek value: " << stack.peek() << endl;
//	if (stack.isFull())
//		cout << "\nList is Full...\n";
//	else
//		cout << "\nList is not Full...\n";
//	cout << "Pop ";
//	stack.pop(); 
//	cout << "\n";
//	cout << " Peek value: " << stack.peek() << endl;
//	cout << "Pop ";
//	stack.pop();
//	cout << "\n";
//	cout << " Peek value: " << stack.peek() << endl;
//	cout << "Pop ";
//	stack.pop();
//	cout << "\n";
//	cout << "Pop ";
//	stack.pop();
//	cout << "\n";
//	if (stack.isEmpty())
//		cout << "\nList is empty...\n";
//	else
//		cout << "\nList is not empty...\n";
//	cout << "Pop ";
//	stack.pop();
//	cout << "\n";
//	stack.print();
//	return 0;
//}