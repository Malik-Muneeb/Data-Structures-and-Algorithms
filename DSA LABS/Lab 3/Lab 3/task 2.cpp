/*

Name: Hafiz Muneeb ur Rehman
Roll no: BCSF15M030
Lab # 3 : Task - 2

*/


#include<iostream>
#include<cmath>

using namespace std;


void towers(int number, char tower1, char tower2, char tower3)
{
	static int moves = 0;
	if (number == 1)
	{
		cout << "Move - " << ++moves << " : Move disk 1 from tower " << tower1 << " to tower " << tower2 << endl;
		return;
	}
	towers(number - 1, tower1, tower3, tower2);
	cout << "Move - " << ++moves << " : Move disk " << number << " from tower " << tower1 << " to tower " << tower2 << endl;
	towers(number - 1, tower3, tower2, tower1);
}

int main()
{
	int numOfDisk = 0;
	cout << "\nEnter number of disk: ";
	cin >> numOfDisk;
	cout << "Total number of moves for " << numOfDisk << " dics: " << pow(2, numOfDisk) - 1 << endl;
	cout << "\n\n\nTable\n\n\n";
	cout << "Number of disks\t\tNumber of moves\n";
	for (int i = 3; i <= 7; i++)
		cout << i << "\t\t\t" << pow(2, i) - 1 << endl;
	cout << "\nCalculation moves for 7 Discs (one move in one minute): ";
	cout << "Total Minutes: " << ceil(pow(2, 7) - 1) << endl;
	cout << "\n\nTotal Number of Days: " << ceil((pow(2, 15) - 1) / (24 * 60)) << "\n";
	cout << "\nTotal number of years to complete game of 64 plate: " << (pow(2, 64) - 1)/ (24 * 60 * 60 * 365)<<"\n\n";
	towers(8, 'A', 'B', 'C' );
	return 0;
}
