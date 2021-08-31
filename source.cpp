#include <iostream>
#include <stdlib.h>

using namespace std;

int main();

int yesNo()
{
	char yesNo;

	cout << "Return to start? [y/n]\n";

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

void toX()
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
		}
	}
	system("pause");
	yesNo();

}

void fibbonacci()
{
	int t1 = 0, t2 = 1, nT = 0, n;

	cout << "Enter a positive integer: ";
	cin >> n;
	cout << "\n";

	cout << t1 << "\n" << t2 << "\n";
	nT = t1 + t2;

	while (nT <= n)
	{
		cout << nT << "\n";
		t1 = t2;
		t2 = nT;
		nT = t1 + t2;
	}
	system("pause");
	yesNo();
}

void square()
{
	int i = 1;
	int x;

	cout << "How many square numbers would you like to generate?\nSquare numbers: ";
	cin >> x;
	x = x + 1;

	for (int i = 1; i < x; i++)
	{
		cout << i * i << "\n";
	}
	system("pause");
	yesNo();
}

void cubes()
{
	int i = 1;
	int x;

	cout << "How many cube numbers would you like to generate?\nCube numbers: ";
	cin >> x;
	x = x + 1;

	for (int i = 1; i < x; i++)
	{
		cout << i * i * i << "\n";
	}
	system("pause");
	yesNo();
}

void addition()
{
	int x, y;

	cout << "Enter the numbers you would like to add: ";
	cin >> x >> y;
	cout << "\n\nAnswer: " << x + y << "\n\n";
	yesNo();

}

void subtraction()
{
	int x, y;

	cout << "Enter the numbers you would like to subtract: ";
	cin >> x >> y;
	cout << "\n\nAnswer: " << x - y << "\n\n";
	yesNo();
}

void multiplication()
{
	int x, y;

	cout << "Enter the numbers you would like to multiply: ";
	cin >> x >> y;
	cout << "\n\nAnswer: " << x * y << "\n\n";
	yesNo();
}

void division()
{
	int x, y;

	cout << "Enter the numbers you would like to divide: ";
	cin >> x >> y;
	cout << "\n\nAnswer: " << x / y << "\n\n";
	yesNo();
}

void geometry()
{
	int x, y, z;


}

void Calc()
{

	int option;

	cout << "What would you like to do?\n\nAddition [1]\n\nSubtraction [2]\n\nDivision [3]\n\nMultiplication [4]\n\nGeometry [5]\n\n";

	cin >> option;

	if (option == 1)
	{
		addition();
	}
	else if (option == 2)
	{
		subtraction();
	}
	else if (option == 3)
	{
		division();
	}
	else if (option == 4)
	{
		multiplication();
	}
	else if (option == 5)
	{
		cout << "Function is incomplete!";
	}
	else
	{
		cout << "Invalid input!\n\n";
		yesNo();
	}

}

int main()
{
	int option;
	char yesNo;

	system("cls");

	cout << "What would you like to do?\n\n1 to x [1]\n\nGenerate a fibbonacci sequence [2]\n\nGenerate cube numbers up to x [3]\n\nGenerate square numbers up to x [4]\n\nUse a geometrical calculator [5]\n\n";

	cin >> option;

	cout << "\n";

	if (option == 1)
	{
		toX();
	}
	else if (option == 2)
	{
		fibbonacci();
	}
	else if (option == 3)
	{
		square();
	}
	else if (option == 4)
	{
		cubes();
	}
	else if (option == 5)
	{
		Calc();
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