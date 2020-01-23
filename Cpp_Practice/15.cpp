#include<iostream>
#include<cmath>

class Point2d
{
private:
	double m_x, m_y;
public:
	Point2d():m_x(0.0), m_y(0.0){}
	Point2d(double x, double y): m_x(x), m_y(y) {}

	void print(void);
	double distanceTo(Point2d &point);
	friend double distanceFrom(Point2d& point1, Point2d& point2);
};

void Point2d::print(void)
{
	std::cout << "m_x:" << m_x << " " <<"m_y:"<<m_y << "\n";
}

double Point2d::distanceTo(Point2d& point)
{
	return sqrt((this->m_x - point.m_x) * (this->m_x - point.m_x) + (this->m_y - point.m_y) * (this->m_y - point.m_y));
}

double distanceFrom(Point2d &point1, Point2d &point2)
{
	return sqrt((point1.m_x - point2.m_x) * (point1.m_x - point2.m_x) + (point1.m_y - point2.m_y) * (point1.m_y - point2.m_y));
}

int quiz_1(void)
{
	Point2d first;
	Point2d second(3.0, 4.0);

	first.print();
	second.print();

	std::cout << "Distance between two points:" << first.distanceTo(second)<< "\n";
	std::cout << "Distance from two points:" << distanceFrom(first, second) << "\n";

	return 0;
}