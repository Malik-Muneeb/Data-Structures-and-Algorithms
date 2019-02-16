//#include<iostream>
//using namespace std;
//
//void selectionSort(int a[], int n);
//int partition(int a[], int p, int r);
//void quickSort(int a[], int p, int r);
//
//int main()
//{
//	int arr1[16] = { 5,14,10,27,45,30,50,7,20,40,37,43,10,14,50,53 };
//	cout << "\nSort arr1 using Selection Sorting\n";
//	selectionSort(arr1, 16);
//	for (int i = 0; i < 16; i++)
//		cout << arr1[i] << " ";
//	cout << "\n\n";
//
//	int arr2[16] = { 5,14,10,27,45,30,50,7,20,40,37,43,10,14,50,53 };
//	cout << "\nSort arr2 using Quick Sorting\n";
//	quickSort(arr2, 0, 15);
//	for (int i = 0; i < 16; i++)
//		cout << arr2[i] << " ";
//	cout << "\n\n";
//	return 0;
//}
//
//void selectionSort(int a[], int n)
//{
//	int index = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int min = a[i];
//		index = i;
//		for (int j = i; j < n; j++)
//		{
//			if (min > a[j])
//			{
//				min = a[j];
//				index = j;
//			}
//		}
//		swap(a[i], a[index]);
//	}
//}
//
//int partition(int a[], int p, int r)
//{
//	int x = a[r];
//	int i = p - 1;
//	for (int j = p; j <= r - 1; j++)
//	{
//		if (a[j] <= x)
//		{
//			i++;
//			swap(a[i], a[j]);
//		}
//	}
//	swap(a[i + 1], a[r]);
//	return i + 1;
//}
//
//void quickSort(int a[], int p, int r)
//{
//	if (p < r)
//	{
//		int q = partition(a, p, r);
//		quickSort(a, p, q - 1);
//		quickSort(a, q + 1, r);
//	}
//}