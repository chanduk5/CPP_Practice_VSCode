
#include <iostream>
#include "Cpp_Practice.h"

class InitPair {
public:
	int InitPairMember_first{ 0 },
		InitPairMember_Second{ 0 };

	InitPair(int first, int second)
	{
		set(first, second);
	}
	InitPair()
	{
	}
	void set(int first, int second)
	{
		InitPairMember_first = first;
		InitPairMember_Second = second;
	}

	void print()
	{
		std::cout << "Pair(" << InitPairMember_first << ", " << InitPairMember_Second << ")\n";
	}
};
int constructor_ex()
{
	InitPair p1;
	p1.set(1, 1);

	InitPair p2{ 2, 2 };
	//p2.set(2, 2);

	p1.print();
	p2.print();
	return 0;

}