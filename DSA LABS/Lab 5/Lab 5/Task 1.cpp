//#include<iostream>
//using namespace std;
//
//void computeSum(int n);
//void findElement(int a[], int x);
//void matricesMultiplication();
//const int N = 16;
//
//int main()
//{
//	int arr[N] = { 5,14,10,27,45,30,50,7,20,40,37,43,10,14,50,53 };
//	int arr1[N] = { 1,2,3,5,7,11,13,17,19,21,23,19,31,37,39,41 };
//	int arr2[N] = { 30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,1 };
//	cout << "\n\nSum of first n integers\n\n";
//	computeSum(25);
//	cout << "\n\nFind a value\n\n";
//	findElement(arr, 10);
//	cout << "\n\nMatrices multiplication\n\n";
//	matricesMultiplication();
//	return 0;
//}
//
//void computeSum(int n)
//{
//	int sum = 0;
//	int i = 1;
//	for (; i <= n; i++)
//		sum = sum + i;
//	cout << "Sum is: " << sum << endl;
//	cout << "Complexity is: " << i << endl;
//	cout << "For O(1):  Number of comlexity is: " << (n*(n + 1)) / 2 << endl;
//}
//
//void findElement(int a[], int x)
//{
//	int count = 0;
//	for (int i = 0; i < N; i++)
//	{
//		++count;
//		if (a[i] == x)
//		{
//			cout << x << " is Found.\n";
//			break;
//		}
//			
//	}
//	cout << "Complexity is: " << count << endl;
//}
//
//
//void matricesMultiplication()
//{
//	int m1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int m2[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int ans[3][3] = { 0 };
//	int sum = 0;
//	int complexity = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			sum = 0;
//			for (int k = 0; k < 3; k++)
//			{
//				sum = sum + (m1[i][k] * m2[k][j]);
//				++complexity;
//			}
//			ans[i][j] = sum;
//			cout << sum << "\t";
//		}
//		cout << endl;
//	}
//	cout << "\nTime complexity is: " << complexity << endl;
//}