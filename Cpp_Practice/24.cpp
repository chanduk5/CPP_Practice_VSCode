#include<iostream>
#include<string.h>

class Car
{
private:
	std::string m_Manufacturer;
	std::string m_model;
public:
	Car(std::string make, std::string model): m_Manufacturer(make), m_model(model){}

	friend bool operator==(const Car& car1, const Car& car2);
	friend bool operator!=(const Car& car1, const Car& car2);
};

bool operator==(const Car& car1, const Car& car2)
{
	return ((car1.m_Manufacturer == car2.m_Manufacturer) &&
			(car1.m_model == car2.m_model));
}

bool operator!=(const Car& car1, const Car& car2)
{
	return !(car1 == car2);
}

int OOL_comparison(void)
{
	Car car1("Benz", "sclass");
	Car car2("Volvo", "s40");

	if (car1 == car2)
	{
		std::cout << "both are same cars";
	}
	else
	{
		std::cout << "both are different cars";
	}

	return 0;
}