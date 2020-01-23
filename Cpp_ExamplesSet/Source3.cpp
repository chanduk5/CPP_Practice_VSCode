
#include<iostream> 
using namespace std;

class A {
public:
    A(int ii = 0) : i(ii) {}
    void show() { cout << "i = " << i << endl; }
private:
    int i;
};

class B {
public:
    B(int xx) : x(xx) {}
    operator A() const { return A(x); }
private:
    int x;
};

void g(A a)
{
    a.show();
}

int ClassExample1(void) {
    B b(10); // B class is initialized 
    g(b); // first copy constructor calling g(b), b is passed as a argument --> 
            // A class is called and initialized to 10, later g() function will be executed.
    g(20); // again copy constructor first class A constructor will be called, later g() function will be executed.
    return 0;
}

//Since there is a Conversion constructor in class A, integer value can be 
//assigned to objects of class A and function call g(20) works.Also, there is a conversion operator 
//overloaded in class B, so we can call g() with objects of class B.