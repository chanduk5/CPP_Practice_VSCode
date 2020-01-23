#include<iostream>
#include<assert.h>
#include<stdlib.h>

class IntArray
{
private:
	int *m_array;
	int m_length;
public:
	IntArray(int length): m_length(length)
	{
		assert(length > 0);

		m_array = new int[length];

		std::cout << "constructor called\n";
		
	}

	~IntArray()
	{
		delete[]m_array;
		std::cout << "denstructor called\n";
	}

	void setValue(int index, int value);
	int getValue(int index);
	int getLength(void);
};

void IntArray::setValue(int index, int value)
{
	m_array[index] = value;
}

int IntArray::getValue(int index) {
	return m_array[index];
}

int IntArray::getLength(void)
{
	return m_length;
}

int destructor_Example(void)
{
	IntArray data(10);

	for (int index = 0; index < data.getLength(); index++)
	{
		data.setValue(index, rand());
		std::cout << data.getValue(index) << '\n';
	}

	for (int index = 0; index < data.getLength(); index++)
	{
		std::cout << data.getValue(index) << '\n';
	}

	return 0;
}