
//Static member in the class
#include<iostream>

using namespace std;

class Test
{
	static int i;
	int j;
};

void staticmemberclassexample(void)
{
	Test test;
	cout << sizeof(Test);
}

/*
static data members do not contribute in size of an object.
So ‘i’ is not considered in size of Test.Also, 
all functions(static and non - static both) do not contribute in size.*/
