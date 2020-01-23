#include <iostream>

template<class T>
class Auto_ptr1
{
	T* m_ptr;
public:
	// Pass in a pointer to "own" via the constructor
	Auto_ptr1(T* ptr = nullptr)
		:m_ptr(ptr)
	{
	}

	// The destructor will make sure it gets deallocated
	~Auto_ptr1()
	{
		delete m_ptr;
	}

	// Overload dereference and operator-> so we can use Auto_ptr1 like m_ptr.
	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }
};

// A sample class to prove the above works
class Resource
{
public:
	Resource() { std::cout << "Resource acquired\n"; }
	~Resource() { std::cout << "Resource destroyed\n"; }

	void print(void)
	{
		std::cout << "resource\n";
	}
};

class temp
{
public:
	temp() { std::cout << "temp acquired\n"; }
	~temp() { std::cout << "temp destroyed\n"; }
};

int smartpointer_Ex1(void)
{
	Auto_ptr1<Resource> res(new Resource); // Note the allocation of memory here

	//Auto_ptr1<temp> restemp(new temp);

	res->print();


		// ... but no explicit delete needed

	// Also note that the Resource in angled braces doesn't need a * symbol, since that's supplied by the template

	return 0;
} // res goes out of scope here, and destroys the allocated Resource for us