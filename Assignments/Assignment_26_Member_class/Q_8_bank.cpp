#include <iostream>
using namespace std;

class Bank
{
private:
    int rate, principle, year;
    float simpleint;

public:
    Bank(int x, int y, int z)
    {
        principle = x;
        rate = y;
        year = z;
    }

    void readdata()
    {
        cout << "your filled details is: "
             << endl
             << " p amount " << principle << endl
             << " rate " << rate << endl
             << " year " << year;
    }

    void si()
    {
        simpleint = (principle * rate * year) / 100;
        cout << endl
             << "your simple intrest is: " << simpleint
             << endl
             << "total amount is " << simpleint + principle;
    }
};

int main()
{
    int x, y, z;
    cout << "enter the pricipleamount,rate and year: ";
    cin >> x >> y >> z;

    Bank b1(x, y, z);
    b1.readdata();
    b1.si();

    return 0;
}