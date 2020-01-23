#include<iostream>

template <class T, int size>

class StaticArray
{
private:
	T m_array[size];
public:
	T* getArray();

	T& operator[](int index)
	{
		return m_array[index];
	}
};

template<class T, int size>
T* StaticArray<T, size>::getArray()
{
	return m_array;
}

int template_nonreturntype(void)
{
	StaticArray<int, 12> intArray;

	for (int count = 0; count < 12; count++)
	{
		intArray[count] = count;
	}

	for (int count = 11; count >= 0; count--)
	{
		std::cout << intArray[count] << " ";
	}
	std::cout << '\n';

	StaticArray<double, 4> doubleArray;

	for (int count = 0; count < 4; count++)
	{
		doubleArray[count] = count * 0.1;
	}

	for (int count = 0; count < 4; count++)
	{
		std::cout << doubleArray[count] << ' ';
	}

	std::cout << "\n";

	return 0;
}