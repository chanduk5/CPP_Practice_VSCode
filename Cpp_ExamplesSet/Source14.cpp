#include<iostream> 
using namespace std;

class Test1
{
	int x;
public:
	void show() { }
};

class Test2
{
	int x;
public:
	virtual void show() { }
};

int virtualExample2(void)
{
	cout << sizeof(Test1) << endl;
	cout << sizeof(Test2) << endl;
	return 0;
}

/* There is only one difference between Test1and Test2.show() is 
non - virtual in Test1, but virtual in Test2.When we make a function virtual, 
compiler adds an extra pointer vptr to objects of the class.
Compiler does this to achieve run time polymorphism.
The extra pointer vptr adds to the size of objects, that is why we get 8 as size of Test2.*/
