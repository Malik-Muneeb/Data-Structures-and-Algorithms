//#include<iostream>
//#include<string>
//using namespace std;
//
//bool isPalindrome(string str, int start, int end);
//int Fibonacci(int x1, int x2, int count);
//bool findElement(int arr[], int size, int element); 
//
//
//int main()
//{
//	string str;
//	cout << "\nEnter string: ";
//	cin >> str;
//	if (isPalindrome(str, 0, str.length()-1))
//		cout << "\nIt is Palindrome\n";
//	else
//		cout << "\nIt is not Palindrome\n";
//	
//	cout << "\nFirst 20 Numbers of Fibonacci Series\n\n";
//	cout << "\n\nSum of 20 Fibonacci Series = " << Fibonacci(0, 1, 1);
//	cout << "\n\nFind element from arr1\n";
//	int arr1[16] = { 5,14,10,27,45,30,50,7,20,40,37,43,10,14,50,53 };
//	if (findElement(arr1, 16, 0))
//		cout << "\nfound\n\n";
//	else
//		cout << "\nNot Found\n\n";
//	return 0;
//}
//
//
//bool isPalindrome(string str, int start, int end)
//{
//		if (str[start++] != str[end--])
//			return false;
//		if(start<end)
//		isPalindrome(str, start, end);
//		return true;
//}
//
//int Fibonacci(int x1, int x2, int count)
//{
//	static int total = 1;
//	if (count > 20)
//		return total;
//	else
//	{
//		if (count == 1)
//			cout << count++ << ",";
//		int sum = x1 + x2;
//		total += sum;
//		cout << sum << ", ";
//		Fibonacci(x2, sum, ++count);
//	}
//}
//
//bool findElement(int arr[], int size, int element)
//{
//	static int count = 0;
//	if (count == size)
//		return false;
//	else
//	{
//		if (arr[count] == element)
//			return true;
//		++count;
//		findElement(arr, size, element);
//	}
//}