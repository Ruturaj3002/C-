#include <iostream>
using namespace std;

class Box
{
private:
    int length, breadth, height;

public:
    Box(int x, int y, int z)
    {
        length = x;
        breadth = y;
        height = z;
    }

    void calculatecube()
    {
        cout << endl
             << " the vloume of box is " << length * breadth * height;
    }
};

int main()
{
    int a, b, c;

    cout << "enter the length,breadth and height: ";
    cin >> a >> b >> c;

    Box b1(a, b, c);
    b1.calculatecube();

    return 0;
}