#include<iostream>
#include<string.h>

class Ball
{
	std::string m_colour = "black"; 
	int m_radius = 10;

public:
	Ball()
	{
		m_colour = "black";
		m_radius = 10;
	}

	Ball(const std::string colour) : m_colour(colour), m_radius(10){}

	Ball(int radius) : m_colour("black"), m_radius(radius){}

	Ball(const std::string colour, int radius) : m_colour(colour), m_radius(radius){}

	void print(void);
};

void Ball::print(void)
{
	std::cout << "colour:" << m_colour << "," << "radius:" << m_radius << '\n';
}

int Constructor_example1()
{
	Ball def;
	def.print();

	Ball blue("blue");
	blue.print();

	Ball twenty(20.0);
	twenty.print();

	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();

	return 0;
}