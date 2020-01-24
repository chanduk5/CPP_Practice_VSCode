#include<iostream> 
using namespace std;

class base {
    int arr[10];
};

class b1 : virtual public base { };

class b2 : virtual public base { };

class derived : public b1, public b2 {};

int virtualExample1(void)
{
    cout << sizeof(derived);
    return 0;
}

//Since b1and b2 both inherit from class base, two copies of class base are there in class derived.
//This kind of inheritance without virtual causes wastage of spaceand ambiguities. 
//virtual base classes are used to save spaceand avoid ambiguities in such cases.For example, 
//following program prints 48. 8 extra bytes are for bookkeeping information stored by the compiler