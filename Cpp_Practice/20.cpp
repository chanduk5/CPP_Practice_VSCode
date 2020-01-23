#include<iostream>
#include<string.h>

class Cents
{
private:
	int m_cents1;
	int m_cents2;
	std::string m_Name;
	std::string m_Sirname;
public:
	Cents(int cents1 = 0, int cents2 = 0, std::string name = "cat", std::string sirname = "rat") 
		: m_cents1(cents1), m_cents2(cents2), m_Name(name), m_Sirname(sirname){}

	friend Cents operator+(const Cents& c1, const Cents& c2);
	friend Cents operator-(const Cents& c1, const Cents& c2);
	int getCents1(void);
	int getCents2(void);
	std::string getname(void);
	std::string getsirname(void);
};

Cents operator+(const Cents& c1, const Cents& c2)
{
	return Cents(c1.m_cents1 + c2.m_cents1, c1.m_cents2 + c2.m_cents2, 
					c1.m_Name + c2.m_Name, c1.m_Sirname + c2.m_Sirname);
}

Cents operator-(const Cents& c1, const Cents& c2)
{
	Cents result(0, 0);
	result.m_cents1 = c1.m_cents1 - c2.m_cents1;
	result.m_cents2 = c1.m_cents2 - c2.m_cents2;

	return result;
}


int Cents::getCents1(void)
{
	return m_cents1;
}

int Cents::getCents2(void)
{
	return m_cents2;
}

std::string Cents::getname(void)
{
	return m_Name;
}

std::string Cents::getsirname(void)
{
	return m_Sirname;
}

int oo_plus(void)
{
	Cents mem1(10, 20, "horse", "dog");
	Cents mem2(20, 30, "lion", "tiger");

	Cents mem3(20, 10);
	Cents mem4(30, 20);

	Cents centssum = mem1 + mem2;
	Cents centsdiff = mem3 - mem4;

	std::cout << "cents1 = " << centssum.getCents1() << "\n";
	std::cout << "cents2 = " << centssum.getCents2() << "\n";
	std::cout << "Name = " << centssum.getname() << "\n";
	std::cout << "Sirname = " << centssum.getsirname() << "\n";

	std::cout << "cents1 = " << centsdiff.getCents1() << "\n";
	std::cout << "cents2 = " << centsdiff.getCents2() << "\n";

	return 0;
}