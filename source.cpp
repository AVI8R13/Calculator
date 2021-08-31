#include <iostream>
#include <stdlib.h>

using namespace std;

int main();

int yesNo()
{
	char yesNo;

	cout << "\nReturn to start? [y/n]\n";

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
	float x, y;

	cout << "Enter the numbers you would like to divide: ";
	cin >> x >> y;
	cout << "\n\nAnswer: " << x / y << "\n\n";
	yesNo();
}

void area()
{
	float h, w, r, b, x, option;

	cout << "What shape would you like to find the area of?\n\nQuadrilaterals [1]\n\nCircles [2]\n\nTriangles [3]\n\n";
	cin >> option;

	if (option == 1)
	{
		cout << "Enter the height and width of the quadrilateral: ";
		cin >> h >> w;
		cout << "\nArea: " << h * w;
		yesNo();
	}
	else if (option == 2)
	{
		cout << "\nEnter the radius of the circle: ";
		cin >> r;
		cout << "Area: " << r * 3.14;
		yesNo();
	}
	else if (option == 3)
	{
		cout << "Enter the height and base of the triangle: ";
		cin >> h >> b;
		x = h * b;
		cout << "\NArea: " << x / 2;
		yesNo();

	}
}

void volume()
{
	float h, w, d;
	int option;
	//remember to add more shapes!!
	cout << "Enter the height, width and depth of you shape: ";
	cin >> h >> w >> d;
	cout << "\nVolume: " << h * w * d;
	yesNo();

}

void surfaceArea()
{
	float h1, h2, h3, w1, w2, w3, x, y, z, i;

	cout << "Enter the height and width of on of the faces: ";
	cin >> h1 >> w1;
	cout << "Enter the height and width of another face: ";
	cin >> h2 >> w2;
	cout << "Enter the height and width of a thrid face: ";
	cin >> h3 >> w3;
	x = h1 * w1;
	y = h2 * w2;
	z = h3 * w3;
	i = x + y + z;
	i = i * 2;
	cout << "Surface area: " << i;
	yesNo();
}

void geometry()
{
	int x, y, z;
	int option;

	cout << "What type of geometry would you like to do?\n\nArea [1]\n\nVolume [2]\n\nSurface area [3]\n\nOther [4]\n\n";

	cin >> option;

	if (option == 1)
	{
		area();
	}
	else if (option == 2)
	{
		volume();
	}
	else if (option == 3)
	{
		surfaceArea();
	}
	else if (option == 4)
	{

	}
	else
	{
		cout << "Invalid input!\n\n";
		yesNo();
	}
	


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
		geometry();
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

	cout << "What would you like to do?\n\nGenerate a 1 to x sequence [1]\n\nGenerate a fibbonacci sequence [2]\n\nGenerate cube numbers up to x [3]\n\nGenerate square numbers up to x [4]\n\nUse a geometrical calculator [5]\n\n";

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