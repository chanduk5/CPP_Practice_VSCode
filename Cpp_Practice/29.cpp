#include<iostream>

class Base
{
protected:
	int m_value;
public:
	Base(int value): m_value(value) {}

	const char* getname()
	{
		return "Base";
	}

	int getValue(void)
	{
		return m_value;
	}
};

class Derived : public Base
{
public:
	Derived(int value): Base(value) {}

	const char* getName(void)
	{
		return "Derived";
	}

	int getValueDoubled(void)
	{
		return (m_value * 2);
	}
};

int virtualfunctions_ex1(void)
{
	Derived derived(5);
	Derived &rDerived = derived;
	Derived *pDerived = &derived;

	Base &rBase = derived;
	Base *pBase = &derived;

	std::cout << "derived is " << derived.getName() << " and has a value " << derived.getValue() << "\n";
	std::cout << "rderived is " << rDerived.getName() << " and has a value " << rDerived.getValueDoubled() << "\n";
	std::cout << "pderived is " << pDerived->getName() << " and has a value " << pDerived->getValueDoubled() << "\n";
	std::cout << "rBase is " << rBase.getname() << " and has a value " << rBase.getValue() << "\n";
	std::cout << "pBase is " << pBase->getname() << " and has a value " << pBase->getValue() << "\n";

	return 0;
}