#include<iostream>
#include "math.h"

using namespace std;

int Exception_Ex2(void)
{
	double number;
	cout << "enter the number: ";
	cin >> number;
	cout << "\n";

	try
	{
		if (number < 0.0)
		{
			throw "cannot take sqrt of negative number";
		}
		else
		{
			cout << "The sqrt of the " << number << "is:" << sqrt(number) << "\n";
		}
	}

	catch (const char* exception)
	{
		cerr << "Error:" << exception << "\n";
	}

	return 0;

}
