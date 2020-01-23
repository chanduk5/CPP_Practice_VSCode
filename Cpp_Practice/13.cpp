#include<iostream>

class Humidity;

class Temperature
{
private:
	int m_temp;

public:
	Temperature(int temp) : m_temp(temp){
	}

	friend void printWeather(Temperature  &temp, Humidity &humd);
};

class Humidity
{
private:
	int m_humd;
public:
	Humidity(int humd) : m_humd(humd) {}

	friend void printWeather(Temperature& temp, Humidity& humd);
};

void printWeather(Temperature& temp, Humidity& humd)
{
	std::cout << "Temperature:" << temp.m_temp << "\n" <<
		"Humidity:" << humd.m_humd << "\n";
}

int friendfunction_example(void)
{
	Temperature Temp(25);
	Humidity Humi(15);

	printWeather(Temp, Humi);
	return 0;
}