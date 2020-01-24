#include<iostream>

using namespace std;

class ObjBase
{
public:
	ObjBase()
	{
		fun();
	}

	virtual void fun(void)
	{
		cout << "Base class" << endl;
	}
};

class ObjDerived : public ObjBase
{
public:

	ObjDerived()
	{
		fun();
	}

	virtual void fun(void)
	{
		cout << "Derived class" << endl;
	}
};

void PolymorphismEx1(void)
{
	ObjBase* pBase = new ObjDerived(); //Before executing the derived constructor, base constructor is called and derived not at created, 
									   //that's the reason Base function is called instead of derived, once the derived constructor is created,
										//most derived function is called.
	pBase->fun();						// Already derived class is created, derived function is called.
	delete pBase;
}