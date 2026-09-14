#include <iostream>
using namespace std;
class Student
{
int age;
public:
Student(int a)
{
age=a;
}
Student(const Student &s)
{
age=s.age;
}
void display()
{
cout<<"Age="<<age<<endl;
}
};
int main()
{
Student s1(20);
Student s2(s1);
s1.display();
s2.display();
}

