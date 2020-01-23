#include<iostream>

class Fraction
{
private:
	int m_Numerator;
	int m_Denominator;
public:
	Fraction(int numerator = 0, int denominator = 0): 
		m_Numerator(numerator), m_Denominator(denominator)
	{
		reduce();
	}

	static int gcd(int a, int b) {
		return (b == 0) ? (a > 0 ? a : -a) : gcd(b, a % b);
	}

	void reduce()
	{
		int gcd = Fraction::gcd(m_Numerator, m_Denominator);
		m_Numerator /= gcd;
		m_Denominator /= gcd;
	}

	void print(void)
	{
		std::cout << m_Numerator << "/" << m_Denominator << "\n";
	}

	friend Fraction operator*(Fraction f1, Fraction f2)
	{
		Fraction result;
		result.m_Numerator = f1.m_Numerator * f2.m_Numerator;
		result.m_Denominator = f1.m_Denominator * f2.m_Denominator;
		return result;
	}

	friend Fraction operator*(Fraction f1, int d)
	{
		Fraction result;
		result.m_Numerator = f1.m_Numerator * d;
		result.m_Denominator = f1.m_Denominator;
		return result;
	}

	friend Fraction operator*(int d, Fraction f1)
	{
		Fraction result;
		result.m_Numerator = f1.m_Numerator * d;
		result.m_Denominator = f1.m_Denominator;
		return result;
	}
 };


int oo_quiz1(void)
{
	Fraction f1(2, 5);
	f1.print();

	Fraction f2(3, 8);
	f2.print();

	Fraction f3 = f1 * f2;
	f3.print();

	Fraction f4 = f1 * 2;
	f4.print();

	Fraction f5 = 2 * f2;
	f5.print();

	Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
	f6.print();

	return 0;
}