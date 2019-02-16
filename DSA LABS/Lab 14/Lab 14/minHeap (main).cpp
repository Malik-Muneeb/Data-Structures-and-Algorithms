#include"MinHeap.h"


int main()
{
	cout << "\nEnter Size of Heap: ";
	int size;
	cin >> size;
	MinHeap minheap(size);
	for (int i = 0; i < size; i++)
	{
		int key;
		double data;
		cout << "\nEnter Key: ";
		cin >> key;
		cout << "\nEnter Data: ";
		cin >> data;
		minheap.enqueue(key, data);
	}
	
	minheap.printAll();
	minheap.dequeue();
	minheap.printAll();
	HeapNode temp = minheap.findMax();
	cout << "\nMaximum key is: " << temp.key << " and its data is " << temp.data << "\n";
	minheap.deleteMax();
	minheap.printAll();
	return 0;
}