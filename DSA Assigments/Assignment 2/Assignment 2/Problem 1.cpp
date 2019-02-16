#include<iostream>
#include<ctime>
#include<cmath>
#include"queue.h"
using namespace std;

void display(int arr[], int start, int end);

int main()
{
	int size;		//4 byte
	cout << "Enter size of array: ";
	cin >> size;
	while(pow(2,int(log2(size)))!=size)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Wrong Input!!! Enter size of array in power of 2: ";
		cin >> size;
	}
	srand(time(0));
	clock_t t1;			//4 byte
	t1 = clock();
	int *arr = new int[size];			//4*size byte
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 10 + 1;
	Queue queue;		//12 byte
	int start = 0, end = size - 1;
	int mid = 0;		//12 bytes
	int count = 0;
	queue.enqueue(start);
	queue.enqueue(end);
	do
	{
		start = queue.dequeue();
		end = queue.dequeue();
		mid = (start + end) / 2;
		cout << "Array: ";
		display(arr, start, end);
		cout << "\n";
		cout << "Left: ";
		display(arr, start, mid);
		cout << "\n";
		cout << "Right: ";
		display(arr, mid+1, end);
		cout << "\n___________________________\n\n";
		if (start < mid)
		{
			queue.enqueue(start);
			queue.enqueue(mid);
			queue.enqueue(mid + 1);
			queue.enqueue(end);
		}
		++count;
	} while (!(queue.isEmpty()));
	clock_t t2;			//4 byte
	t2 = clock();
	cout << "\n\nExecution time is: " << float((t2 - t1)/float(1000))<<" second.\n" ;
	cout << "\n\nTotal space: " << 48 + (4 * size) << " Bytes.\n";			//48 is the sum of size of variables,queue size, clock_t size.
	cout << "\n\n count: " << count;
	cout << "\n\n";
	return 0;
}


void display(int arr[], int start, int end)
{
	for (int i = start; i <= end; i++)
		cout << arr[i] << " ";
}