#include <iostream>
struct Employee
{
	short id;
	int age;
	double wage;


	void printInformation(Employee employee)
	{
		std::cout << "ID:   " << employee.id << "\n";
		std::cout << "Age:  " << employee.age << "\n";
		std::cout << "Wage: " << employee.wage << "\n";
	}
};
int structobjectexample()
{
	Employee joe = { 14, 32, 24.15 };
	Employee frank = { 15, 28, 18.27 };

	// Print Joe's information
	joe.printInformation(joe);

	std::cout << "\n";

	// Print Frank's information
	frank.printInformation(frank);

	return 0;
}