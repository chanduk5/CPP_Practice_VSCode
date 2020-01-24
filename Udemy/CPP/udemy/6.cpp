#include <iostream>
#include <string>
using namespace std;

void cpp_strings() {

    string unformatted_full_name {"StephenHawking"};

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----

    string first_name {unformatted_full_name, 0, 6};
    string last_name = unformatted_full_name.substr(7);

    cout <<first_name << endl;
    cout << last_name << endl;



    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    //cout << formatted_full_name;
}
