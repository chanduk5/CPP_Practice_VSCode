#include<iostream>

constexpr auto CRICKETER_AVG_AGE(18);

class Person
{
public:
	std::string m_name;
	int m_age;
	std::string m_country;

	Person(std::string name = " ", int age = CRICKETER_AVG_AGE, std::string country = " "):
		m_name(name), m_age(age), m_country(country){}

	std::string getName(void)
	{
		return m_name;
	}

	int getAge(void)
	{
		return m_age;
	}

	std::string getCountry(void)
	{
		return m_country;
	}
};

class Cricketplayer: public Person
{
public:
	int m_highestscore;
	double m_battingAvg;

	Cricketplayer(int highestscore = 0, double batAvg = 0.0, std::string name = " ", 
		int age = CRICKETER_AVG_AGE, std::string country = " "):Person(name, age, country), 
		m_highestscore(highestscore), m_battingAvg(batAvg) {}

	int getHigestScore(void)
	{
		return m_highestscore;
	}

	double getBattingAvg(void)
	{
		return m_battingAvg;
	}

	friend std::ostream& operator<<(std::ostream& out, Cricketplayer& player);
};

class Employee : public Person
{
public:
	int m_empId;
	std::string m_company;

	Employee(int empId, std::string comapany): m_empId(empId), m_company(comapany){}

	int getEmpId(void)
	{
		return m_empId;
	}

	std::string getCompany(void)
	{
		return m_company;
	}

	friend std::ostream& operator<<(std::ostream& out, Cricketplayer& player);
};

std::ostream& operator<<(std::ostream& out, Employee& emp)
{
	out << "Employee name: " << emp.getName() << "  age: " << emp.getAge()
		<< "  country: " << emp.getCountry() << "  ID: " << emp.getEmpId()
		<< "  comapany: " << emp.getCompany() << "\n";

	return out;
}

std::ostream& operator<<(std::ostream& out, Cricketplayer& player)
{
	out << "Player name: " << player.getName() << "  age: " << player.getAge()
		<< "  country: " << player.getCountry() << "  highscore: " << player.getHigestScore()
		<< "  batting avg: " << player.getBattingAvg() << "\n";

	return out;
}


int inheritance_ex1(void)
{
	Cricketplayer player1(183, 74, "kohli", 30, "india");
	//player1.m_name = "kohli";
	//player1.m_age = 30;
	//player1.m_country = "india";
	std::cout << player1;

	Employee emp1(10, "ASML");
	emp1.m_name = "john";
	emp1.m_age = 30;
	emp1.m_country = "NL";
	std::cout << emp1;

	return 0;
}


