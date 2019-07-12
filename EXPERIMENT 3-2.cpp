#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x;

	int ProvinceA[7];
	for (x=0 ; x<7 ; x++)
	{
		cout << "Province A, Day"<< x+1 << ": ";
		cin >> ProvinceA[7];
	}

	cout << "\n";

	int ProvinceB[7];
	for (x=0 ; x<7 ; x++)
	{
		cout << "Province B, Day" << x+1 << ": ";
		cin >> ProvinceB[7];		
	}

	cout << "\n";

	int ProvinceC[7];
	for (x=0 ; x<7 ; x++)
	{
		cout << "Province C, Day" << x+1 << ": ";
		cin >> ProvinceC[7];
	}

	cout << "\n\n";

	cout << "Displaying Values: \n";

	for (x=0 ; x<7 ; x++)
	{
		cout << "Province A, Day" << x+1 << " = " << ProvinceA[7] << endl;
	}

	cout << "\n";

	for (x=0 ; x<7 ; x++)
	{
		cout << "Province B, Day" << x+1 << " = " << ProvinceB[7] << endl;
	}

	cout << "\n";

	for (x=0 ; x<7 ; x++)
	{
		cout << "Province C, Day" << x+1 << " = " << ProvinceC[7] << endl;
	}

	getch();
	return 0;
}