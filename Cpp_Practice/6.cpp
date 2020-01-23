#include <iostream>

#include "Cpp_Practice.h"

class DateClass // members are private by default
{
	int m_month; // private by default, can only be accessed by other members
	int m_day; // private by default, can only be accessed by other members
	int m_year; // private by default, can only be accessed by other members
	int m_week;

public:
	void setDate(int month, int day, int year, int week)
	{
		m_month = month;
		m_day = day;
		m_year = year;
		m_week = week;
	}

	void print()
	{
		std::cout << m_month << "/" << m_day << "/" << m_year << "/" << m_week << "\n";
	}

	// Note the addition of this function
	void copyFrom(const DateClass& d)
	{
		// Note that we can access the private members of d directly
		m_month = d.m_month;
		m_day = d.m_day;
		m_year = d.m_year;
		m_week = d.m_week;
	}
};

int AccessSpecifier_Example2()
{
	DateClass date;
	date.setDate(10, 14, 2020, 5); // okay, because setDate() is public
	date.print();

	DateClass copy;
	copy.copyFrom(date); // okay, because copyFrom() is public
	copy.print();

	return 0;
}