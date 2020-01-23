#include <iostream>

class DateClass // members are private by default
{
	int m_month; // private by default, can only be accessed by other members
	int m_day; // private by default, can only be accessed by other members
	int m_year; // private by default, can only be accessed by other members

	void print() // public, can be accessed by anyone
	{
		std::cout << m_month << "/" << m_day << "/" << m_year;
	}

public:
	void setDate(int month, int day, int year) // public, can be accessed by anyone
	{
		// setDate() can access the private members of the class because it is a member of the class itself
		m_month = month;
		m_day = day;
		m_year = year;

		//DateClass::print(); // okay, because print() is private
	}

};

int AccessSpecifier_Example1()
{
	DateClass date;
	date.setDate(10, 14, 2020); // okay, because setDate() is public

	return 0;
}