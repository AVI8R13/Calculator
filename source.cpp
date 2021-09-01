#include <iostream>
#include <stdlib.h>
#include <math.h>

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
	system("cls");
	
	int y;
	int x;

	cout << "Enter the number you want to count to: ";

	cin >> y;

	for (int x = 1; x <= y; x++) 
	{
		cout << "\n " << x;
	}
	cout << "\n\nPrinted integers 1 to " << y << endl;

	yesNo();

}

void fibbonacci()
{
	system("cls");
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
	system("cls");
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
	system("cls");
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
	system("cls");
	float x, y;

	cout << "Enter the numbers you would like to add: ";
	cin >> x >> y;
	cout << "\n\nAnswer: " << x + y << "\n\n";
	yesNo();

}

void subtraction()
{
	system("cls");
	float x, y;

	cout << "Enter the numbers you would like to subtract: ";
	cin >> x >> y;
	cout << "\n\nAnswer: " << x - y << "\n\n";
	yesNo();
}

void multiplication()
{
	system("cls");
	float x, y;

	cout << "Enter the numbers you would like to multiply: ";
	cin >> x >> y;
	cout << "\n\nAnswer: " << x * y << "\n\n";
	yesNo();
}

void division()
{
	system("cls");
	float x, y;

	cout << "Enter the numbers you would like to divide: ";
	cin >> x >> y;
	cout << "\n\nAnswer: " << x / y << "\n\n";
	yesNo();
}

void area()
{
	system("cls");
	float h, w, r, b, x, option;

	cout << "What shape would you like to find the area of?\n\nQuadrilaterals [1]\n\nCircles [2]\n\nTriangles [3]\n\nGo back [4]\n\n";
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
	else if (option == 4)
	{
		main();
	}
	else
	{
		cout << "Invalid input!";
		yesNo();
	}
}

void volume()
{
	system("cls");
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
	system("cls");
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
	system("cls");
	int option;

	cout << "What type of geometry would you like to do?\n\nArea [1]\n\nVolume [2]\n\nSurface area [3]\n\nGo back [4]\n\n";

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
		main();
	}
	else
	{
		cout << "Invalid input!\n\n";
		yesNo();
	}
	


}

void otherMaths()
{
	system("cls");
	int option;
	float x;
	float y;

	cout << "What would you like to do?\n\n\nFind a square root [1]\n\nSquare a number [2]\n\nCube a number [3]\n\nX to the power of Y [4]\n\nGo back [5]\n\n";
	cin >> option;
	if (option == 1)
	{
		cout << "\n\nEnter the number you want to find the sqaure root of: ";
		cin >> x;
		cout << "\n\nSquare root of " << x << " : " << sqrt(x);
		yesNo();
	}
	else if (option == 2)
	{
		cout << "\n\nEnter the number you want to square: ";
		cin >> x;
		cout << "\n\n" << x << " squared: " << x * x;
		yesNo();
	}
	else if (option == 3)
	{
		cout << "\n\nEnter the number you want to cube: ";
		cin >> x;
		cout <<"\n\n" << x << " cubed: " << x * x * x;
		yesNo();
	}
	else if (option == 4)
	{
		cout << "\n\nEnter a number: ";
		cin >> x;
		cout << "\n\nWhat power do you want to raise " << x << " to: ";
		cin >> y;
		cout <<"\n\n" << x << " to the power of " << y << ": " << pow(x, y);
		yesNo();
	}
	else if (option == 5)
	{
		main();
	}
	else
	{
		cout << "Invalid input!\n\n";
		yesNo();
	}
}

void reciprocal()
{
	system("cls");

	float x;

	cout << "Enter the nuuumber you want to find the reciprocal of: ";
	cin >> x;
	cout << "\n\nThe reciprocal of " << x << " is 1/" << x;
	yesNo();
}

void Calc()
{
	system("cls");
	int option;

	cout << "What would you like to do?\n\nAddition [1]\n\nSubtraction [2]\n\nDivision [3]\n\nMultiplication [4]\n\nGeometry [5]\n\nSquare roots, sqares and cubes [6]\n\nReciprocal [7]\n\nGo back [8]\n\nOption: ";

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
	else if (option == 6)
	{
		otherMaths();
	}
	else if (option == 7)
	{
		reciprocal();
	}
	else if (option == 8)
	{
		main();
	}
	else
	{
		cout << "Invalid input!\n\n";
		yesNo();
	}

}

void sequences()
{
	int option;

	cout << "What type of sequence would you like to generate?\n\n1 to X [1]\n\nFibbonacci [2]\n\nSquares to X [3]\n\nCubes to X [4]\n\nGo back [5]\n\n";

	cin >> option;

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
		main();
	}
	else
	{
		cout << "Invalid input\n\n";
		yesNo();
	}

}

int main()
{
	int option;
	char yesNo;

	system("cls");

	cout << "What would you like to do?\n\nGenerate sequences [1]\n\nGeometrical Calculator [2]\n\n";

	cin >> option;

	cout << "\n";

	if (option == 1)
	{
		sequences();
	}
	else if (option == 2)
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