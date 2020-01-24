#include<iostream> 

using namespace std;
class P {
public:
    virtual void print ()
    {
        cout << " Inside P::";
    }
};

class Q : public P {
public:
    virtual void print ()
    {
        cout << " Inside Q";
    }
};

class R : public Q {
};

int InheritenceEx1(void)
{
    R * r = new R;

    r->print(); // It will look into r class, no print member function in the class and then it looks into the most base class print memeber function.
    return 0;
}