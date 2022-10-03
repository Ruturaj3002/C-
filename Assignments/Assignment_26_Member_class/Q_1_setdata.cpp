#include <iostream>

using namespace std;

class Complex
{
private:
    int real, img;

public:
    void stedata(int x, int y)
    {
        real = x;
        img = y;
    }

    void showdata()
    {
        cout << endl
             << "real= " << real << " img= " << img;
    }

    Complex add(Complex C)
    {
        Complex temp;

        temp.real = real + C.real;
        temp.img = img + C.img;
        return temp;
    }
};

int main()
{

    Complex c1, c2, c3;

    c1.stedata(5, 4);
    c2.stedata(10, 7);
    c1.showdata();
    c2.showdata();
    c3 = c1.add(c2);
    c3.showdata();
}