
#include <iostream>
#include <string>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    void getData()
    {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s[3];   // Array of 3 Student objects

    cout << "Enter Student Details:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].getData();
    }

    cout << "\nStudent Details:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].display();
    }

    return 0;
}

