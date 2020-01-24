#include<iostream>
#include<vector>

using namespace std;

int vector_program(void)
{
    vector <int> vector1, vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "elements in vector1: " << vector1.at(0) << "," << vector1.at(1) << endl;

    vector2.push_back(10);
    vector2.push_back(20);

    cout << "elements in vector2: " << vector2.at(0) << "," << vector2.at(1) << endl;

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "elements in vector_2d row 0: " << vector_2d.at(0).at(0) << "," << vector_2d.at(0).at(1) << endl;
    cout << "elements in vector_2d row 1: " << vector_2d.at(1).at(0) << "," << vector_2d.at(1).at(1) << endl;

    vector1.at(0)= 100;
    cout << "elements in vector1: " << vector1.at(0) << "," << vector1.at(1) << endl;
    cout << "elements in vector_2d row 0: " << vector_2d.at(0).at(0) << "," << vector_2d.at(0).at(1) << endl;
    cout << "elements in vector_2d row 1: " << vector_2d.at(1).at(0) << "," << vector_2d.at(1).at(1) << endl;

    return 0;
}
