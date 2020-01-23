#include<iostream>

class Staticclass
{
public:
	static int s_value;
};

int Staticclass::s_value = 1;

int static_example(void)
{
	Staticclass::s_value = 2;

	std::cout << Staticclass::s_value << '\n';
	return 0;
}
