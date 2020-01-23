#include<iostream>

class Base
{
public:
	const char* sayHi()
	{
		return "Hi";
	}

	virtual const char* getName()
	{
		return "Base";
	}

	virtual int getValue() = 0;
};

class Derived : public Base
{
public:
	virtual int getValue()
	{
		int temp = 10;
		return temp;
	}

};

int pureVirtualFunction_ex1(void)
{
	Derived derived;
	std::cout << derived.getValue();

	return 0;
}