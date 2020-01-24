#include<iostream>

using namespace std;

class amount
{
private:
    int dollars;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
public:

    int get_dollars(void)
    {
        return dollars;
    }

    int get_quarters(void)
    {
        return quarters;
    }

    int get_dimes(void)
    {
        return dimes;
    }

    int get_nickels(void)
    {
        return nickels;
    }

    int get_pennies(void)
    {
        return pennies;
    }

    int set_number_dollars(int input)
    {
        dollars = input/100;
        input = input%100;
        return input;
    }

    int set_number_quarters(int input)
    {
        quarters = input/25;
        input = input%25;
        return input;
    }

    int set_number_dimes(int input)
    {
        dimes = input/10;
        input = input%10;
        return input;
    }

    int set_number_nickels(int input)
    {
        nickels = input/5;
        input = input%5;
        return input;
    }

    int set_number_pennies(int input)
    {
        pennies = input;
        return input;
    }
};

int get_amount(void)
{
    int amount_input = 0;

    cout << "enter the amount: ";
    cin >> amount_input;

    amount am;
    amount_input = am.set_number_dollars(amount_input);
    amount_input = am.set_number_quarters(amount_input);
    amount_input = am.set_number_dimes(amount_input);
    amount_input = am.set_number_nickels(amount_input);
    amount_input = am.set_number_pennies(amount_input);

    cout << "dollars: " << am.get_dollars() <<endl;
    cout << "quarters: " << am.get_quarters() <<endl;
    cout << "dimes: " << am.get_dimes() <<endl;
    cout << "nickels: " << am.get_nickels() <<endl;
    cout << "pennies: " << am.get_pennies() <<endl;

    return 0;
}
