#include<iostream>
using namespace std;

void bubbleSort(int a[], int n);
void mergeSort(int a[], int l, int r);
void merge(int a[], int l, int m, int r);
int linearSearch(int a[], int size, int num);
int binarySearch(int a[], int size, int num);

int main()
{
	int A[] = { 9,5,11,1,3,17,2,5,45,96,78,71,23,68,47,89 };
	int arr[16] = { 5,14,10,27,45,30,50,7,20,40,37,43,10,14,50,53 };
	cout << "\nUnsorted Array\n";
	int s = sizeof(A) / sizeof(A[0]);
	for (int i = 0; i < s; i++)
		cout << A[i] << " ";
	cout << "\nBubble Sort\n";
	bubbleSort(A, 16);
	cout << "\nUnsorted Array\n";
	for (int i = 0; i < s; i++)
		cout << arr[i] << " ";
	mergeSort(arr, 0, 15);
	cout << "\nMerge Sort\n";
	for (int i = 0; i < s; i++)
		cout << arr[i] << " ";
	cout << "\nLinear Search\nEnter a Number to Search: ";
	int num;
	cin >> num;
	int index = linearSearch(A, s, num);
	if (index == -1)
		cout << "\n" << num << " does not exist in given array.\n";
	else
		cout << "\n" << num << " is found at index " << index << "\n";
	cout << "\nBinary Search\nEnter a Number to Search: ";
	cin >> num;
	index = binarySearch(A, s, num);
	if (index == -1)
		cout << "\n" << num << " does not exist in given array.\n";
	else
		cout << "\n" << num << " is found at index " << index << "\n";
	return 0;
}

void bubbleSort(int a[], int n)
{
	bool isSorted = true;
	while(isSorted)
	{
		isSorted = false;
		int temp = 0;
		for (int j = 0; j < n; j++)
		{
			if (j + 1 < n && a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				isSorted = true;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

void mergeSort(int a[], int l, int r)
{
	if (l < r)
	{
		int m = (l + r) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

void merge(int a[], int l, int m, int r)
{
	int n1 = m + 1 - l, n2 = r - m;
	int* L = new int[n1];
	int* R = new int[n2];
	int index = l;
	for (int i = 0; i < n1; i++)
	{
		L[i] = a[index];
		index++;
	}
	int index1 = m + 1;
	for (int i = 0; i < n2; i++)
	{
		R[i] = a[index1];
		index1++;
	}

	int i, j, k;
	i = j = 0; 
	k = l;
	while (i <n1 && j <n2)
	{
		if (L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		a[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		a[k] = R[j];
		j++;
		k++;
	}
}

int linearSearch(int a[], int size, int num)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] == num)
			return i;
	}
	return -1;
}

int binarySearch(int a[], int size, int num)
{
	int start = 0;
	int end = size - 1;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (num < a[mid])
			end = mid-1;
		else if (num>a[mid])
			start = mid+1;
		else
			return mid;
	}
	return -1;
}