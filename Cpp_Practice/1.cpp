#include<iostream>
#include<cmath>
#include<iomanip>
//Calculate the distance 2 points A and B
#include "Cpp_Practice.h"

class Point
{
private:
	float x, y;
public:
	void enterPoint();
	friend int calculateDistance(Point A, Point B);
};

void Point::enterPoint()
{
	std::cout << "Enter the coordinate point ( x, y):";
	std::cin >> x >> y;
}
int calculateDistance(Point A, Point B)
{
	return sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
}


int friendfunctionExample()
{
	static Point A, B;
	A.enterPoint();
	B.enterPoint();
	std::cout << "The distance 2 points A and B: " << std::setprecision(2) << calculateDistance(A, B) << std::endl;
	return 0;
}