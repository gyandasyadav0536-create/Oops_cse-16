#include <iostream>
using namespace std;
//inline function
inline int square(int n)
{
return n*n;

}
//function with default argument
int add(int a,int b=10)
{
return a+b;
}
//function overloading
int calculate(int a,int b,int c)
{
return a+b+c;
}
double calculate(double a,double b)
{
return a*b;
}
int main()
{
cout<<"inline function"<<endl;
cout<<"square of 5="<<square(5)<<endl;
cout<<"\n Default Argument function"<<endl;
cout<<Add(30)=
}