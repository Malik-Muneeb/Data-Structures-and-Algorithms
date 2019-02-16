//#include<iostream>
//#include<ctime>
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
//int main()
//{
//	int arr[1000];
//	srand(time(0));
//	for (int i = 0; i < 1000; i++)
//		arr[i] = rand() % 5000;
//
//	PriorityQueue queue(1000);
//
//	clock_t push_t1 = clock();
//	for (int i = 0; i < 1000; i++)
//		queue.push(arr[i]);
//	clock_t push_t2 = clock();
//
//	if (queue.empty())
//		cout << "\nQueue is empty.\n";
//	else
//		cout << "\nQueue is not empty.\n";
//
//	cout << "\nSize of queue is " << queue.size() << "\n\n";
//
//	//queue.pop();
//
//	//cout << "\nSize of queue after pop is " << queue.size() << "\n\n";
//
//	cout << "\nLargest Number in queue is " << queue.top() << "\n\n";
//
//	
//		
//	//poping
//	clock_t pop_t1 = clock();
//	while (!queue.empty())
//		queue.pop();
//	clock_t pop_t2 = clock();
//	
//	cout << "Execution time for Pushing 1000 Numbers:   " << (push_t2 - push_t1) << " milliseconds.\n";
//	cout << "Execution time for Poping 1000 Numbers:   " << (pop_t2 - pop_t1) << " milliseconds.\n";
//
//	return 0;
//}
//
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
//	while (2 * i < sizeOfQueue && 2 * i + 1 < sizeOfQueue && (arr[i] < arr[2 * i] || arr[i] < arr[(2 * i) + 1]))
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
