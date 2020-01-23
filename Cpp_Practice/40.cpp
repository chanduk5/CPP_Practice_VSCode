#include<iostream>

template <class T>

class AutoPtr2
{
private:
	T* m_ptr;
public:
	AutoPtr2(T* ptr = nullptr) : m_ptr(ptr)
	{
	}

	AutoPtr2(AutoPtr2& res)
	{
		m_ptr = res.m_ptr;
		res.m_ptr = nullptr;
	}

	~AutoPtr2()
	{
		delete m_ptr;
	}

	AutoPtr2& operator=(AutoPtr2& a)
	{
		if (&a == this)
		{
			return *this;
		}

		delete m_ptr;
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;

		return *this;
	}

	T& operator*() const
	{
		return m_ptr;
	}

	T* operator->() const
	{
		return m_ptr;
	}

	bool isNull(void) const
	{
		return (m_ptr != nullptr);
	}
};

class Resource
{
public:
	Resource()
	{
		std::cout << "Resource acquired\n";
	}

	~Resource()
	{
		std::cout << "Resource destroyed\n";
	}
};

int smartPointer_ex3(void)
{
	AutoPtr2<Resource> res1(new Resource);
	AutoPtr2<Resource> res2;

	std::cout << "res1 is:" << res1.isNull() << "\n";
	std::cout << "res2 is:" << res2.isNull() << "\n";

	res2 = res1;

	std::cout << "res1 is:" << res1.isNull() << "\n";
	std::cout << "res2 is:" << res2.isNull() << "\n";

	return 0;
}