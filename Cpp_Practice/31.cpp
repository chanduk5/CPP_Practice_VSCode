#include<iostream>

class Animal
{
protected:
	std::string m_name;

	Animal(std::string name): m_name(name) {}

public:
	std::string getName(void)
	{
		return m_name;
	}

	virtual std::string getSound(void)
	{
		return "don't know";
	}
};

class Cat : public Animal
{
public:
	Cat(std::string name): Animal(name) {}

	virtual std::string getSound(void)
	{
		return "Meow";
	}
};

class Dog : public Animal
{
public:
	Dog(std::string name) : Animal(name) {}

	virtual std::string getSound(void)
	{
		return "Bow";
	}
};

int virtualfunctions_ex3(void)
{
	Cat cat("john");
	Dog dog("chris");

	Animal *animal = &cat;
	std::cout << "Animal name: " << animal->getName() << "  Animal sound: " << animal->getSound() << "\n";

	animal = &dog;
	std::cout << "Animal name: " << animal->getName() << "  Animal sound: " << animal->getSound() << "\n";

	return 0;
}