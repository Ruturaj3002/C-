#include <iostream>
using namespace std;

class Cube

{
private:
    int x, cube;

public:
    Cube(int a)
    {
        cube = a * a * a;

        cout << "the cube of numner is " << cube;
    }
};

int main()
{
    int y;

    cout << "enter the number: ";

    cin >> y;

    Cube c1(y);

    return 0;
}