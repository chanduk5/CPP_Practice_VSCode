#include<iostream>

using namespace std;

int& fun()
{
	int a = 10;
	cout << &a << endl;
	return a;
}

int referenceEx(void)
{
	int& y = fun(); // return the reference, the address of the Y and variable a in fun() are same.

	y = y + 10;
	cout << y << endl;
	cout << &y << endl;

	return 0;

}