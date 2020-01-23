#include<iostream>

class Point
{
private:
	double m_x, m_y, m_z;
public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0):
		m_x(x), m_y(y), m_z(z){}

	friend std::ostream& operator<<(std::ostream& out, Point& point)
	{
		out << point.m_x << ", " << point.m_y <<", "<< point.m_z << "\n";

		return out;
	}
};

int oo_out(void)
{
	Point point(1.1, 2.0, 3.0);

	std::cout << point;
	return 0;
}