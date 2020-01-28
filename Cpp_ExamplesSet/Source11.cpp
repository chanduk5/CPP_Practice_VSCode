#include<iostream>

using namespace std;

class Test
{
	int& t;

public:
	Test(int& x): t(x)
	{
	}

	int getT()
	{
		cout << "address of t: " << &t << endl;
		return t;
	}
};

int classreferenceexample(void)
{
	int x = 20;
	Test t1(x);
	cout << "address of x: " << &x << endl;
	cout << t1.getT() << " "; 
	x = 30;
	cout << "address of x: " << &x << endl;
	cout << t1.getT() << endl;
	return 0;
}

