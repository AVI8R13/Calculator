#include <iostream>
#include <stdlib.h>

using namespace std;

int main();

int toX()
{
	int x;
	int i = 1;

	cout << "What number would you like to print to?\nPrinting to number: ";
	cin >> x;
	cout << "\n";
	x = x + 1;

	for (int i = 1; i < x; i++)
	{
		cout << "\n" << i << endl;
		if (i == x - 1)
		{
			cout << "\n";
			cout << "Complete!\n";
			//Rememebr to add yesNo here once funtion is done!!
		}
	}
	system("pause");
	return main();

}


int main()
{
	int option;
	char yesNo;

	cout << "What sequence would you like to generate?\n\n1 to x [1]\n\nFibbonacci [2]\n\nCube numbers up to x [3]\n\nSquare Numbers up to x [4]\n\n" << endl;

	cin >> option;

	cout << "\n";

	if (option == 1)
	{
		toX();
	}
	else if (option == 2)
	{

	}
	else if (option == 3)
	{

	}
	else if (option == 4)
	{

	}
	else
	{
		cout << "Invalid input!!\n\nReturn to start? [Y/N]";
		cin >> yesNo;
		if (yesNo == 'y')
		{
			return main();
		}
		else if (yesNo == 'n')
		{
			return 0;
		}
	}
}

