#include <iostream>
using namespace std;

class Bill
{
private:
    int amount = 0, unit = 0;

public:
    void getdetils()
    {

        cout << endl
             << "enter the unit: ";
        cin >> unit;
    }

    void calculatebill()
    {
        if (unit >= 1 && unit <= 100)
        {
            amount = 1.2 * unit;
        }

        if (unit <= 101 && unit <= 200)
        {
            amount = 2 * unit;
        }

        if (unit <= 201)
        {
            amount = 3 * unit;
        }
    }

    void displaybill()
    {
        cout << endl
             << "the final amount is " << amount;
    }
};

int main()
{

    Bill b1;

    b1.getdetils();
    b1.calculatebill();
    b1.displaybill();
    return 0;
}