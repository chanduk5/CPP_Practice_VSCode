#include<iostream>

template <class T>

class AutoPtr1
{
private:
	T* m_ptr;
public:
	AutoPtr1(T* ptr = nullptr): m_ptr(ptr)
	{
	}

	AutoPtr1(AutoPtr1& res) 
	{
		m_ptr = res.m_ptr;
		res.m_ptr = nullptr;
	}

	~AutoPtr1()
	{
		delete m_ptr;
	}

	T& operator*() const
	{
		return m_ptr;
	}

	T* operator->() const
	{
		return m_ptr;
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

int smartPointer_ex2(void)
{
	AutoPtr1<Resource> res1(new Resource);
	AutoPtr1<Resource> res2(res1);

	return 0;
}