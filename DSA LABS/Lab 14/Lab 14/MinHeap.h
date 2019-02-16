#ifndef MINHEAP_H
#define MINHEAP_H

#include<iostream>
using namespace std;

class HeapNode
{
public:
	int key;		// Heap item priority key
	double data;	// data of heapNode
	HeapNode()
	{
		key = 0;
		data = 0;
	}
};

class MinHeap
{
	HeapNode *arr;			// Pointer to dynamically allocated array
	int length;				// Size of the array
	int numOfElements;		// Number of elements in the heap
public:
	MinHeap(int s);
	void enqueue(int key, double data);				//Add an element in Min Heap.
	void dequeue();									// delete the element with least priority.
	void printAll();								// print all elements in heap.
	void heapifyUp();								//Reheap when an element is added, in order to keep it a minHeap
	void heapifyDown();								// Reheap when an element is deleted.
	HeapNode findMax();									// find max element in minHeap
	void deleteMax();								// Delete max element.

};

#endif // MINHEAP_H