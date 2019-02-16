#include<iostream>
using namespace std;

void printMessage(int n)		//function that print a message n times.
{
	if (n <= 0)
		return;
	else
	{
		printMessage(n - 1);
		cout << n << "-Hello World!\n";
	}
}

int factorial(int n)			// fuction that compute factorial of n.
{
	if (n == 0)
		return 1;
	else 
	{
		return n*factorial(n - 1);
	}
}

void fibonacci(int number)		//function that compute first n Fibonacci numbers. 0 1 1 2 3 5 8 13 21 34
{
	static int num1 = 0, num2 = 1, sum = 0;
	if (number <= 0)
		return;
	else
	{
		if (sum == 0)
		{
			cout << num1 << " " << num2 << " ";
			sum = 1;
		}
		else
		{
			sum = num1 + num2;
			cout << sum << " ";
			num1 = num2;
			num2 = sum;
		}
		fibonacci(number - 1);
	}
}

float power(float number, int n)		// function that compute nth power of number.
{
	if (n <= 1)
		return number;
	else
	{
		return number*power(number, n - 1);
	}
}

int gcf(int a, int b)			// function that compute greater common factor or GCD of two numbers.
{
	if (a == 0 || b == 0)
		return a;
	else if (a < b)
	{
		b = b%a;
		if (b  == 0)
			return a;
		gcf(a, b);
	}
	else if (a > b)
	{
		a = a%b;
		if (a  == 0)
			return b;
		gcf(a, b);
	}
}

int sumArray(int arr[], int n)		// function that compute sum of n sized array.
{

	if (n <= 1)
		return arr[n];
	else
	{
		return arr[n-1] + sumArray(arr, n - 1);
	}
}

int MaxValue(int arr[], int n)		// function that compute maximum value in n sized array.
{
	static int max = arr[0];
	if (n <= 1)
		return max;
	else
	{
		if (arr[n - 1] > max)
			max = arr[n - 1];
		return MaxValue(arr, n - 1);
	}
}

bool Palindrome(string str, int n)		// function that find either a given string is a palindrome or not.
{
	static bool flag = false;
	static int count = -1;
	if (n <= 0)
		return flag;
	else
	{
		if (n >= 0)
			count++;
		if (str[count] == str[n - 1])
			flag = true;
		if (flag == false)
			return false;
		Palindrome(str, n - 1);
	}
}


int main()
{
	cout << "\nPrint Messege Function\n\n";
	printMessage(5);
	cout << "\nFactorial Function (only valid from 0 to 31)\n\n";
	cout << factorial(5) << "\n";
	cout << "\nFibonacci Series\n\n";
	fibonacci(9);
	cout << "\nPower Function\n\n";
	cout << power(3, 4) << "\n";
	cout << "\nGCF Function\n\n";
	cout << gcf(3,10) << "\n";

	int arr[5] = { 2,3,2,5,2 };
	cout << "\nSum of Array\n\n";
	cout << sumArray(arr, 5) << "\n";

	cout << "\nFind Max value function\n\n";
	cout << MaxValue(arr, 5) << "\n";

	cout << "\nPalindrome\n\n";
	bool isPalindrome = false;
	isPalindrome = Palindrome("str", 3);
	if (isPalindrome)
		cout << "It is palindrome\n";
	else
		cout << "It is not palindrome\n";


	return 0;
}