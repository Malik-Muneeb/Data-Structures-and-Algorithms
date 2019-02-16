//#include<iostream>
//#include<queue>
//#include<ctime>
//using namespace std;
//
//int main()
//{
//	int arr[1000];
//	srand(time(0));
//	for (int i = 0; i < 1000; i++)
//		arr[i] = rand() % 5000;
//
//	priority_queue<int> queue;
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