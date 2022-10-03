#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int id, rollno;
    
    char str[20];

public:
    Student(char str1[], int x, int y)
    {
        strcpy(str, str1);
        id = x;
        rollno = y;
    }

    void showdata()
    {
        cout << endl
             << "the detils is: "
             << endl
             << " name = " << str << " id " << id << " roll number " << rollno;
    }
};

int main()
{
    int a, b;
    char str[20];

    cout << "enter student details name id roll number:";
    cout << endl
         << "enter the student name: ";

    fgets(str, 20, stdin);
    cout << "enter id and roll number: ";

    fflush;
    cin >> a >> b;

    Student s1(str, a, b);
    s1.showdata();

    return 0;
}