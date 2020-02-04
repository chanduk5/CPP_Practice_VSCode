#include<iostream>
using namespace std;

class Mycpp
{
public:
    Mycpp()
    {
        cout << "Constructor";
    }
};

int classexample4(void)
{
    Mycpp obj;
    return 0;
}