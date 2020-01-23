#include<iostream>
#include <string.h>
#include <assert.h>

class Stack
{
	int m_data[10];
	signed int m_length;

public:

	void reset(void)
	{
		m_length = 0;
	}

	int push(int item)
	{
		if (m_length < 10)
		{
			m_data[m_length] = item;
			m_length++;
			return true;
		}
		else
		{
			return false;
		}
	}

	int pop()
	{
		if (m_length < 0)
		{
			assert(0);
			return false;
		}
		else
		{
			int item;

			item = m_data[m_length];
			m_length--;
			return item;
		}
	}

	void print(void)
	{
		for (int index = 0; index <= m_length; index++)
		{
			std::cout << m_data[index] << "\n";
		}
	}
};



int stack_example()
{
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

	return 0;
}