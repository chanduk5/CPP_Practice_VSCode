#include<iostream>
#include "Cpp_Practice.h"

class IntPair
{
public:
	int m_x, m_y;
	void Set(int f_x, int f_y);
	void Print(void);
};

void IntPair::Set(int f_x, int f_y)
{
	m_x = f_x;
	m_y = f_y;
}

void IntPair::Print(void)
{
	std::cout << "value of x: " << m_x << "\n";
	std::cout << "value of y: " << m_y << "\n";
}


int class_ex1()
{
	IntPair p1;
	p1.Set(1, 1); // set p1 values to (1, 1)

	IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)

	p1.Print();
	p2.Print();

	return 0;
}

