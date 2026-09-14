#include<iostream>
using namespace std;
class Student
{
int age;
int marks;
public:
Student(int a=18,int m=50)
{
age=a;
marks=m;
}
void display()
{
cout<<"age="<<age<<endl;
cout<<"Marks="<<marks<<endl;
}
};
int main()
{
Student s1;
Student s2(20);
Student s3(21,80);
s1.display();
s2.display();
s3.display();
return 0;
}