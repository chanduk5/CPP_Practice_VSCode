#include<iostream>

using namespace std;

class Base1
{
public:
	Base1()
	{
		cout << "Base 1 constructor is called" << endl;
	}
};

class Base2
{
public:
	Base2()
	{
		cout << "Base 2 constructor is called" << endl;
	}
};

class Derived: public Base1, public Base2
{
public:
	Derived()
	{
		cout << "Derived constructor is called" << endl;
	}
};

void Inheritencesimpleexample(void)
{
	Derived d;
}

//In case of Multiple Inheritance, constructors of base classes are always called in derivation order 
//from left to rightand Destructors are called in reverse order.