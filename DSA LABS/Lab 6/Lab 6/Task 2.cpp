//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//#include<Windows.h>
//#include<fstream>
//using namespace std;
//
//template <class T>
//void binarySearch(T a[], int size, T num);
//template <class T>
//void displayArrays(T a[], int size);
//template <class T>
//void bubbleSort(T a[], int size);
//template<class T>
//void mergeSort(T a[], int l, int r);
//template<class T>
//void merge(T a[], int l, int m, int r);
//template<class T>
//void linearSearch(T a[], int size, T num);
//int mergeiterate = 0;
//
//int main()
//{
//	int arr1[100], arr2[1000], arr3[2000], arr4[3000], arr5[5000], arr6[7000], arr7[10000];
//	srand(time(0));
//	for (int i = 0; i < 100; i++)
//		arr1[i] = rand() % 100;
//	for (int i = 0; i < 1000; i++)
//		arr2[i] = rand() % 1000;
//	for (int i = 0; i < 2000; i++)
//		arr3[i] = rand() % 2000;
//	for (int i = 0; i < 3000; i++)
//		arr4[i] = rand() % 3000;
//	for (int i = 0; i < 5000; i++)
//		arr5[i] = rand() % 5000;
//	for (int i = 0; i < 7000; i++)
//		arr6[i] = rand() % 7000;
//	for (int i = 0; i < 10000; i++)
//		arr7[i] = rand() % 10000;
//
//	fstream file("Execution.txt", ios::out | ios::app);
//	file << "\nLinear Search\n";
//	linearSearch(arr1, 100, 10);
//	linearSearch(arr2, 1000, 10);
//	linearSearch(arr3, 2000, 10);
//	linearSearch(arr4, 3000, 10);
//	linearSearch(arr5, 5000, 10);
//	linearSearch(arr6, 7000, 10);
//	linearSearch(arr7, 10000, 10);
//
//	file << "\nBubble Sort\n";
//	bubbleSort(arr1, 100);
//	bubbleSort(arr2, 1000);
//	bubbleSort(arr3, 2000);
//	bubbleSort(arr4, 3000);
//	bubbleSort(arr5, 5000);
//	bubbleSort(arr6, 7000);
//	bubbleSort(arr7, 10000);
//
//	file << "\nBinary Search\n";
//	binarySearch(arr1, 100, 10);
//	binarySearch(arr2, 2000, 10);
//	binarySearch(arr3, 3000, 10);
//	binarySearch(arr4, 4000, 10);
//	binarySearch(arr5, 5000, 10);
//	binarySearch(arr6, 7000, 10);
//	binarySearch(arr7, 10000, 10);
//
//
//	double farr1[100], farr2[1000], farr3[2000], farr4[3000], farr5[5000], farr6[7000], farr7[10000];
//	for (int i = 0; i < 100; i++)
//		farr1[i] = rand() / 1.67;
//	for (int i = 0; i < 1000; i++)
//		farr2[i] = rand() / 1.67;
//	for (int i = 0; i < 2000; i++)
//		farr3[i] = rand() / 1.67;
//	for (int i = 0; i < 3000; i++)
//		farr4[i] = rand() / 1.67;
//	for (int i = 0; i < 5000; i++)
//		farr5[i] = rand() / 1.67;
//	for (int i = 0; i < 7000; i++)
//		farr6[i] = rand() / 1.67;
//	for (int i = 0; i < 10000; i++)
//		farr7[i] = rand() / 1.67;
//
//	file << "\nMerge Sort\n";
//	long int start = GetTickCount();
//	mergeSort(farr1, 0, 100 - 1);
//	long int end = GetTickCount();
//	long int time = (end - start) * 1000;
//	file << "\nExecution time for " << 100 << " is: " << time << "\n"; 
//	file << "\nNumber of iterations is: " << mergeiterate << "\n";
//
//	mergeiterate = 0;
//	start = GetTickCount();
//	mergeSort(farr2, 0, 1000 - 1);
//	end = GetTickCount();
//	time = (end - start) * 1000;
//	file << "\nExecution time for " << 1000 << " is: " << time << "\n";
//	file << "\nNumber of iterations is: " << mergeiterate << "\n";
//
//	mergeiterate = 0;
//	start = GetTickCount();
//	mergeSort(farr3, 0, 2000 - 1);
//	end = GetTickCount();
//	time = (end - start) * 1000;
//	file << "\nExecution time for " << 2000 << " is: " << time << "\n";
//	file << "\nNumber of iterations is: " << mergeiterate << "\n";
//
//	mergeiterate = 0;
//	start = GetTickCount();
//	mergeSort(farr4, 0, 3000 - 1);
//	end = GetTickCount();
//	time = (end - start) * 1000;
//	file << "\nExecution time for " << 3000 << " is: " << time << "\n";
//	file << "\nNumber of iterations is: " << mergeiterate << "\n";
//
//	mergeiterate = 0;
//	start = GetTickCount();
//	mergeSort(farr5, 0, 5000 - 1);
//	end = GetTickCount();
//	time = (end - start) * 1000;
//	file << "\nExecution time for " << 5000 << " is: " << time << "\n";
//	file << "\nNumber of iterations is: " << mergeiterate << "\n";
//
//	mergeiterate = 0;
//	start = GetTickCount();
//	mergeSort(farr6, 0, 7000 - 1);
//	end = GetTickCount();
//	time = (end - start) * 1000;
//	file << "\nExecution time for " << 7000 << " is: " << time << "\n";
//	file << "\nNumber of iterations is: " << mergeiterate << "\n";
//
//	mergeiterate = 0;
//	start = GetTickCount();
//	mergeSort(farr7, 0, 10000 - 1);
//	end = GetTickCount();
//	time = (end - start) * 1000;
//	file << "\nExecution time for " << 10000 << " is: " << time << "\n";
//	file << "Number of iterations is: " << mergeiterate;
//	return 0;
//}
//
//
//template<class T>
//void binarySearch(T a[], int size, T num)
//{
//	srand(time(0));
//	long int start = GetTickCount();
//	int iteration = 0;
//	int low = 0;
//	int high = size - 1;
//	bool flag = true;
//	while (low <= high && flag)
//	{
//		++iteration;
//		int mid = (low + high) / 2;
//		if (num < a[mid])
//			high = mid-1;
//		else if (num>a[mid])
//			low = mid + 1;
//		else
//			flag = false;
//	}
//	long int end = GetTickCount();
//	long int time = (end - start) * 1000;
//	fstream file("Execution.txt", ios::out | ios::app);
//	file << "\nExecution time for " << size << " is: " << time << "\n";
//	file << "\nNumber of iterations is: " << iteration << "\n";
//}
//
//template<class T>
//void bubbleSort(T a[], int size)
//{
//	int iteration = 0;
//	srand(time(0));
//	long int start = GetTickCount();
//	bool isSorted = true;
//	while (isSorted)
//	{
//		isSorted = false;
//		T temp = 0;
//		for (int j = 0; j < size; j++)
//		{
//			++iteration;
//			if (j + 1 < size && a[j] > a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//				isSorted = true;
//			}
//		}
//	}
//	long int end = GetTickCount();
//	long int time = (end - start) * 1000;
//	fstream file("Execution.txt", ios::out | ios::app);
//	file << "\nExecution time for " << size << " is: " << time << "\n";
//	file << "\nNumber of iterations is: " << iteration << "\n";
//}
//
//
//template <class T>
//void displayArrays(T a[],int size)
//{
//	for (int i = 0; i < size; i++)
//		cout << a[i] << " ";
//}
//
//template <class T>
//void mergeSort(T a[], int l, int r)
//{
//	if (l < r)
//	{
//		int m = (l + r) / 2;
//		mergeSort(a, l, m);
//		mergeSort(a, m + 1, r);
//		merge(a, l, m, r);
//		++mergeiterate;
//	}
//	
//}
//
//template <class T>
//void merge(T a[], int l, int m, int r)
//{
//	int n1 = m + 1 - l, n2 = r - m;
//	T* L = new T[n1];
//	T* R = new T[n2];
//	int index = l;
//	for (int i = 0; i < n1; i++)
//	{
//		L[i] = a[index];
//		index++;
//	}
//	int index1 = m + 1;
//	for (int i = 0; i < n2; i++)
//	{
//		R[i] = a[index1];
//		index1++;
//	}
//
//	int i, j, k;
//	i = j = 0; 
//	k = l;
//	while (i <n1 && j <n2)
//	{
//		if (L[i] <= R[j])
//		{
//			a[k] = L[i];
//			i++;
//		}
//		else
//		{
//			a[k] = R[j];
//			j++;
//		}
//		k++;
//	}
//
//	while (i < n1)
//	{
//		a[k] = L[i];
//		i++;
//		k++;
//	}
//
//	while (j < n2)
//	{
//		a[k] = R[j];
//		j++;
//		k++;
//	}
//}
//
//template <class T>
//void linearSearch(T a[], int size, T num)
//{
//	int iteration = 0;
//	srand(time(0));
//	bool flag = true;
//	long int start = GetTickCount();
//	for (int i = 0; i < size && flag; i++)
//	{
//		++iteration;
//		if (a[i] == num)
//			flag = false;
//	}
//	long int end = GetTickCount();
//	long int time = (end - start) * 1000;
//	fstream file("Execution.txt", ios::out | ios::app);
//	file << "\nExecution time for " << size << " is: " << time << "\n";
//	file << "\nNumber of iterations is: " << iteration << "\n";
//}
