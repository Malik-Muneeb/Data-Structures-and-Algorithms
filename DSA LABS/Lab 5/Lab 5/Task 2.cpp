#include<iostream>
using namespace std;

void bubbleSort(int a[], int n);
void selectionSort(int a[], int n);
void insertionSort(int a[], int n);
void mergeSort(int a[], int l, int r);
void merge(int a[], int l, int m, int r);
int partition(int a[], int p, int r);
void quickSort(int a[], int p, int r);


int main()
{
	int arr[16] = { 5,14,10,27,45,30,50,7,20,40,37,43,10,14,50,53 };
	int arr1[16] = { 1,2,3,5,7,11,13,17,19,21,23,19,31,37,39,41 };
	int arr2[16] = { 30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,1 };
	/*cout << "\n\nBubble Sort\n";
	bubbleSort(arr, 16);
	cout << "\n\nSelection Sort\n";
	selectionSort(arr, 16);
	cout << "\n\nInsertion Sort\n";
	insertionSort(arr, 16);
	cout << "\n\nsplit array\n";
	int A[5] = { 9,5,11,1,3 };
	mergeSort(A, 0, 4);
	cout << "\n\n";
	for (int i = 0; i < 5; i++)
		cout << A[i] << " ";
	cout << "\n\n\n";*/

	quickSort(arr, 0, 15);

	cout << "\n\n";
	for (int i = 0; i < 15; i++)
		cout << arr[i] << " ";
	cout << "\n\n\n";
	return 0;
}

void bubbleSort(int a[], int n)
{
	bool isSorted = true;
	int complexity = 0;
	while(isSorted)
	{
		isSorted = false;
		int temp = 0;
		for (int j = 0; j < n; j++)
		{
			++complexity;
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
	cout << "\nComplexity is: " << complexity << endl;
}

void selectionSort(int a[], int n)
{
	int complexity = 0;
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		int min = a[i];
		index = i;
		for (int j = i; j < n; j++)
		{
			++complexity;
			if (min > a[j])
			{
				min = a[j];
				index = j;
			}
		}
		int temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "\n\ncomplexity is: " << complexity << endl;
}

void insertionSort(int a[], int n)
{
	/*for (int j = 1; j < size; j++)
	{
		int	key = arr[j];
		int	i = j - 1;
		while (arr[i]	>	key	&&	i >= 0)
		{
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = key;
	}
	*/

	int complexity = 0;
	for (int i = 0; i < n;i++)
	{
		int temp = 0;
		for (int j = i; j > 0; j--)
		{
			++complexity;
			if (a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "\nComplexity is: " << complexity << endl;
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
		cout << L[i] << " ";
		index++;
	}
	cout << "\t\t\t";
	int index1 = m + 1;
	for (int i = 0; i < n2; i++)
	{
		R[i] = a[index1];
		cout << R[i] << " ";
		index1++;
	}
	cout << endl;

	int i, j, k;
	i = j = k = l;
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

int partition(int a[], int p, int r)
{
	int x = a[r];
	int i = p - 1;
	for (int j = p; j <= r - 1; j++)
	{
		if (a[j] <= x)
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}

void quickSort(int a[], int p, int r)
{
	if (p < r)
	{
		int q = partition(a, p, r);
		quickSort(a, p, q - 1);
		quickSort(a, q + 1, r);
	}
}