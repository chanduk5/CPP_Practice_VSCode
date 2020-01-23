#include<iostream>

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents):m_cents(cents) {}

	Cents operator-()const
	{
		return Cents(-m_cents);
	}

	int getCents(void)
	{
		return m_cents;
	}
};

int OOL_unary(void)
{
	const Cents mem1(5);

	std::cout << " mem1 has to pay:" << (-mem1).getCents()<< "\n";
	return 0;
}