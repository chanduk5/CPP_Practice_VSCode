#include<iostream>

using namespace std;

int favoritenumber(void)
{
    int number;
    cout << "enter your favorite number between 1 and 100:";
    cin >> number;
    cout << "Amazing!! That's my favorite number too!"<< endl;
    cout << "No really!!, "<< number << " is my favorite number" << endl;
    return 0;
}

