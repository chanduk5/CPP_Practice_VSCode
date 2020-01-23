#include<iostream>

class Base
{
public:
	virtual const char* getName()
	{
		return "Base";
	}
};

class Derived : public Base
{
public:
	virtual const char* getName()
	{
		return "derived";
	}
};

int virtualfunctions_ex2(void)
{
	Derived derived;

	Base& rbase = derived;
	std::cout << rbase.getName() << "\n";
	return 0;
}