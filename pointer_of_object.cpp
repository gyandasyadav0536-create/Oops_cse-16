```cpp
#include <iostream>
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
    Student s;          // Object
    Student *ptr;       // Pointer to object

    ptr = &s;            // Pointer stores address of object

    ptr->getData();      // Access member function using pointer
    ptr->display();

    return 0;
}
```
