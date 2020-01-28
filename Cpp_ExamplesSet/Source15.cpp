#include<iostream> 
using namespace std;
class P
{
	int a;
public:
	P()
	{
		a = 0;
		cout << "P default constructor is called" << endl;
	}
	virtual void show() = 0; //pure virtual function
};

class Q : public P {
	int x;
public:
	Q()
	{
		x = 0;
		cout << "Q default constructor is called" << endl;
	}
	virtual void show()
	{
		cout << "virtual function implemented here" << endl;
	}
};

int virtualExample3(void)
{
	Q q;
	q.show();
	return 0;
}
