#include"MinHeap.h"

MinHeap::MinHeap(int s)
{
	length = s;
	arr = new HeapNode[length];
	numOfElements = 0;
}

void MinHeap::enqueue(int key, double data)
{
	++numOfElements;
	arr[numOfElements].key = key;
	arr[numOfElements].data = data;
	if (numOfElements > 1)
		heapifyUp();
}

void MinHeap::heapifyUp()
{
	int i = numOfElements;
	while (i > 1 && arr[i / 2].key > arr[i].key)
	{
		swap(arr[i / 2].key, arr[i].key);
		swap(arr[i / 2].data, arr[i].data);
		i = i / 2;
	}
}

void MinHeap::dequeue()
{
	arr[1] = arr[numOfElements];
	arr[numOfElements].key = NULL;
	arr[numOfElements].data = NULL;
	--numOfElements;
	heapifyDown();
}


void MinHeap::heapifyDown()
{
	int i = 1;
	while (i<=numOfElements && arr[i].key > arr[2 * i].key || arr[i].key > arr[(2 * i) + 1].key)
	{
		if (arr[2 * i].key != 0 && arr[(2 * i) + 1].key != 0)
		{
			if (arr[2 * i].key < arr[(2 * i) + 1].key)
			{
				swap(arr[2 * i], arr[i]);
				i = 2 * i;
			}
			else
			{
				swap(arr[(2 * i) + 1], arr[i]);
				i = 2 * i + 1;
			}
		}
		else
		{
			if (arr[2 * i].key != 0 && arr[2 * i].key < arr[(2 * i) + 1].key)
			{
				swap(arr[2 * i], arr[i]);
				i = 2 * i;
			}
			else if (arr[(2 * i) + 1].key != 0 && arr[2 * i].key >= arr[(2 * i) + 1].key)
			{
				swap(arr[(2 * i) + 1], arr[i]);
				i = 2 * i + 1;
			}
			else
				i = i * 2;
		}
	}
}

void MinHeap::printAll()
{
	cout << "\n\nContents of MinHeap: ";
	for (int i = 1; i <= numOfElements; i++)
		cout << "\nKey: " << arr[i].key << " ----- Data: " << arr[i].data << "\n";
	cout << "\n\n\n";
}


HeapNode MinHeap::findMax()
{
	int i = numOfElements;
	int max = arr[i].key;
	int index = i;
	for (int j = i - 1; j > 0; j--)
	{
		if (arr[j].key > max)
		{
			max = arr[j].key;
			index = j;
		}
	}
	return arr[index];
}

void MinHeap::deleteMax()
{
	int i = numOfElements;
	int max = arr[i].key;
	int index = i;
	for (int j = i - 1; j > 0; j--)
	{
		if (arr[j].key > max)
		{
			max = arr[j].key;
			index = j;
		}
	}
	

	arr[index].key = NULL;
	arr[index].data = NULL;
	int diff = numOfElements - index;
	if (diff > 0)
	{
		for (int k = index; k < numOfElements; k++)
		{
			if (arr[k + 1].key != 0)
				swap(arr[k], arr[k + 1]);
		}
	}
	--numOfElements;
}