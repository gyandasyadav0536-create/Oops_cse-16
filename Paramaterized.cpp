#include <iostream>
using namespace std;

class Student
{
    int age;

public:
    Student(int a)
    {
        age = a;
    }

    void display()
    {
        cout << "Age = " << age << endl;
    }
};

int main()
{
    Student s(20);
    s.display();

    return 0;
}