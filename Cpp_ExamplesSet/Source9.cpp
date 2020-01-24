#include<iostream> 
using namespace std;

class Test {
    int value;
public:
    Test(int v = 1); //comb of default and parameterized constructor, should have initial value
};

Test::Test(int v) {
    value = v;
}

int constructorex2(void) {
    Test t[100]; //object without parameters
    return 0;
}