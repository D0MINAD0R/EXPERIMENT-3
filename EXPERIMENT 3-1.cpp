#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int Array[10];
	int smallest;
	int largest;
	double sum = 0;
	int x;

	for (x=0 ; x<10 ; x++)
	{
		cout << "Enter the elements of the array: ";
		cin >> Array[x];
	}

	largest = Array[0];
	for (x=0 ; x<10 ; x++)
	{
		if (largest < Array[x])
			largest = Array[x];
	}

	smallest = Array[0];
	for (x=0 ; x<10 ; x++)
	{
		if (smallest > Array[x])
			smallest = Array[x];
	}

	for (x=0 ; x<10 ; x++)
	{
		sum = sum + Array[x];
	}

	cout << "Smallest: " << smallest << endl;
	cout << "Largest: " << largest << endl;
	cout << "Total sum: " << sum << endl;
	cout << "Average: " << sum/10 << endl;

	getch();
	return 0;
}