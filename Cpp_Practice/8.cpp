#include<iostream>

class Fraction
{
	int m_numerator;
	int m_denominator;

public:
	Fraction(): m_numerator(0), m_denominator(1)
	{

	}

	//Fraction(int value1, int value2) : m_numerator(value1), m_denominator(value2)
	//{

	//}

	Fraction(int value1, int value2  = 1) : m_numerator(value1), m_denominator(value2)
	{

	}

	int getNumerator(void)
	{
		return m_numerator;
	}

	int getdenominator(void)
	{
		return m_denominator;
	}

	int getvalue(void)
	{
		return ((static_cast<double>(m_numerator)) / m_denominator);
	}
};

int Constructor_example(void)
{
	Fraction Frac;
	Fraction tempfrac(10, 5);
	Fraction Frac1(10);
	Fraction Frac2 = Fraction(1, 2);
	Fraction Frac3 = Fraction(20);
	Fraction Frac4 = 5;

	std::cout << Frac.getNumerator() << "\n" << Frac.getdenominator() << "\n" << Frac.getvalue() << "\n";
	std::cout << tempfrac.getNumerator() << "\n" << tempfrac.getdenominator() << "\n" << tempfrac.getvalue() << "\n";
	std::cout << Frac1.getNumerator() << "\n" << Frac1.getdenominator() << "\n" << Frac1.getvalue() << "\n";
	std::cout << Frac2.getNumerator() << "\n" << Frac2.getdenominator() << "\n" << Frac2.getvalue() << "\n";
	std::cout << Frac3.getNumerator() << "\n" << Frac3.getdenominator() << "\n" << Frac3.getvalue() << "\n";
	std::cout << Frac4.getNumerator() << "\n" << Frac4.getdenominator() << "\n" << Frac4.getvalue() << "\n";

	return 0;
}