//How many times will A be printed ?

#include<iostream>
using namespace std;

class A
{

public:
    ~A() {
        cout << "A";
    }
};
int classexample5(void)
{
    A obj;
    obj.~A();

    return 0;
}
