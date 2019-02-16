//#include<iostream>
//using namespace std;
//
//class PriorityQueue
//{
//	int* arr;
//	int sizeOfQueue;
//public:
//	PriorityQueue(int s)
//	{
//		arr = new int[s] {0};
//		sizeOfQueue = 0;
//	}
//	void push(int n);
//	void pop();
//	int top() { return arr[1]; }
//	int size() { return sizeOfQueue; }
//	bool empty()
//	{
//		if (sizeOfQueue == 0)
//			return true;
//		return false;
//	}
//};
//
//
//int main()
//{
//	cout << "How many Numbers ypu want to enter: ";
//	int count;
//	cin >> count;
//	PriorityQueue queue(count);
//	for (int i = 0; i < count; i++)
//	{
//		cout << "\nEnter Number: ";
//		int num;
//		cin >> num;
//		queue.push(num);
//	}
//
//	cout << "\n\nSize of queue is " << queue.size() << "\n\n";
//	
//	queue.pop();
//	
//	cout << "\n\nSize of queue after pop() is " << queue.size() << "\n\n";
//	
//	cout << "Largest Number in queue is " << queue.top() << "\n\n";
//	
//	queue.pop();
//	queue.pop();
//	//queue.pop();
//	//queue.pop();
//	
//	if (queue.empty())
//		cout << "\nQueue is empty.\n";
//	else
//		cout << "\nQueue is not empty.\n";
//	return 0;
//}
//
//void PriorityQueue::push(int n)
//{
//	if (sizeOfQueue == 0)
//	{
//		arr[++sizeOfQueue] = n;
//		return;
//	}
//	else
//	{
//		arr[++sizeOfQueue] = n;
//		int i = sizeOfQueue;
//		while (i > 1 && arr[i / 2] < arr[i])
//		{
//			swap(arr[i / 2], arr[i]);
//			i = i / 2;
//		}
//	}
//}
//
//void PriorityQueue::pop()
//{
//	arr[1] = arr[sizeOfQueue];
//	arr[sizeOfQueue--] = NULL;
//	int i = 1;
//	while (2 * i < sizeOfQueue && 2 * i + 1 < sizeOfQueue && arr[i] < arr[2 * i] || arr[i] < arr[(2 * i) + 1])
//	{
//		if (arr[2 * i] > arr[(2 * i) + 1])
//		{
//			swap(arr[2 * i], arr[i]);
//			i = 2 * i;
//		}
//		else
//		{
//			swap(arr[(2 * i) + 1], arr[i]);
//			i = 2 * i + 1;
//		}
//	}
//}
