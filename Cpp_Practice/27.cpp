#include<iostream>

class Fraction
{
private:
	double m_numerator;
	double m_denominator;
public:
	Fraction(double numerator, double denominator) :
		m_numerator(numerator), m_denominator(denominator) {}

	Fraction(Fraction &fact1): 
		m_numerator(fact1.m_numerator), m_denominator(fact1.m_denominator) 
	{
		std::cout << "copy constrctor\n";
	}

	friend std::ostream& operator<<(std::ostream& out, Fraction &fact1)
	{
		return out << fact1.m_numerator << "/" << fact1.m_denominator << "\n";
	}
};

int copyconstructor_normal(void)
{
	Fraction fact(1, 2);
	Fraction factcopy(fact);

	std::cout << fact;
	std::cout << factcopy;

	return 0;
}