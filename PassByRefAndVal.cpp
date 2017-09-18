//Evan Mora
//This sample program is intended to demonstrate how to
//pass parameters by reference and by value.

#include <iostream>
using namespace std;

void passByValue(int arg)
{
	arg += 2;
}

void passByReference(int&arg)
{
	arg += 2;
}

int main()
{
	int x = 0;
	passByValue(x);
	cout << x << endl; // Returns 0.
	passByReference(x);
	cout << x << endl; //Returns 2.
	
	int y = 0;
	passByReference(y);
	cout << y << endl; //Returns 2.
	passByValue(y);
	cout << y << endl; //Returns 2 because it was set by the two lines of code above.
	

	
}

