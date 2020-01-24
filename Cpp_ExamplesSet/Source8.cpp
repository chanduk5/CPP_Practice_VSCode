#include<iostream> 
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point()
    {
        cout << "Default constructor called\n";
    }
    Point(int i = 1, int j = 1)    // Normal Constructor
    {
        x = i;
        y = j;
        cout << "Normal Constructor called\n";
    }
    Point(const Point& t) // Copy Constructor 
    {
        x = t.x;
        y = t.y;
        cout << "Copy Constructor called\n";
    }
};


void constructorex1(void)
{
    Point * t1 = new Point(10, 15); // parameterized consturctor is called
    Point * t2 = new Point(*t1);
    Point t3 = *t1;
    Point t4(0,0);
    t4 = t3;
}