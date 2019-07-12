#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x;
	int y;
	int size;

	char Array[7];

	cout << "Enter a value for the Array: ";
	cin >> Array;

	for (x=0 ; Array[x] != '\0' ; x++)
	{
		size = x;
	}

	y = x-1;
	x =0;

	while (Array[x] > Array[y])
	{
		char temp = Array[x];
		Array[x] = Array[y];
		Array[y] = temp;
		x++;
		y--;
	}

	cout << "Reversed Elements: ";
	for (x=0 ; x<=size ; x++)
	{
		cout << Array[x];
	}

	cout << " " << endl;

	cout << "Array Size: " << size+1;

	getch();
	return 0;
}