#include<iostream>

using namespace std;

int chargeCleaningService(void)
{
    int small_room_cost{0};
    int large_room_cost{0};
    const double tax{0.06};
    int number_small_rooms{0}, number_large_room{0}, cost{0};
    double total_cost{0.0}, tax_cost{0.0};

    cout << "number of small rooms:";
    cin >> number_small_rooms;
    cout << "number of large rooms:";
    cin >> number_large_room;

    cout << "small room cost:";
    cin >> small_room_cost;
    cout << "large room cost:";
    cin >> large_room_cost;

    cost =  ((small_room_cost * number_small_rooms)+(large_room_cost * number_large_room));
    tax_cost = (cost * tax);
    total_cost = (cost + tax_cost);

    cout << "cost: " << cost << endl;
    cout << "tax : " << tax_cost << endl;
    cout << "total_cost: " << total_cost << endl;

    return 0;
}


