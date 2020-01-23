#include<iostream>

class Fraction
{
private:
	double m_numerator;
	double m_denominator;
public:
	Fraction(double numerator, double denominator) :
		m_numerator(numerator), m_denominator(denominator) {}

	friend std::ostream& operator<<(std::ostream& out, Fraction fact1)
	{
		return out << fact1.m_numerator << "/" << fact1.m_denominator << "\n";
	}
};

int copyconstructor_public(void)
{
	Fraction fact(1, 2);
	Fraction factcopy(fact);

	std::cout << fact;
	std::cout << factcopy;

	return 0;
}