#include<iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "BCon\n";
    }
    ~base()
    {
        cout << "BDest\n";
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "DCon\n";
    }
    ~derived()
    {
        cout << "DDest\n";
    }
};

int InheritenceEx2(void)
{
    derived object;
    return 0;
 }