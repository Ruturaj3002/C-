#include <iostream>
using namespace std;

class Date
{
private:
    int date, month, year;

public:
    Date(int x, int y, int z)
    {
        date = x;
        month = y;
        year = z;
    }

    void showdate()
    {
        cout << endl
             << " date= " << date << " ,month= " << month << " ,year= " << year;
    }
};

int main()
{

    Date d1(12, 06, 2022);
    d1.showdate();

    return 0;
}