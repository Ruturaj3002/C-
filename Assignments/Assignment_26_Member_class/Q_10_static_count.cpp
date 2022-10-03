#include <iostream>
using namespace std;

class Staticcount
{
private:
    int count;

public:
    static int k;

    void increment()
    {
        count = k + 1;
    }

    void display()
    {
        cout << "the count is " << count;
    }
};

int main()
{

    Staticcount s1;
    s1.increment();
    s1.display();
    return 0;
}