#include<iostream>

using namespace std;

class Point1
{
private:
	int x, y;
public:
	Point1(int i, int j);
};

Point1::Point1(int i = 0, int j = 0)
{
	x = i, y = j;
	cout << "Point constructor\n";
}

void ClassExample2(void)
{
	Point1 p1, * p2; // P2 is just a pointer variable, not an object.
	Point1* p3 = new Point1(); // P3 pointed to the Point object
	delete p3;
}