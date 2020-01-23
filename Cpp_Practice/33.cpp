#include<iostream>

template <typename T>

const T& max(const T& x, const T& y)
{
	return (x > y) ? x : y;
}

int template_Ex1(void)
{
	int i = max(1, 2);
	std::cout << i << "\n";

	double d = max(1.1, 2.2);
	std::cout << d << "\n";

	char c = max('a', '5');
	std::cout << c << "\n";

	return 0;
}