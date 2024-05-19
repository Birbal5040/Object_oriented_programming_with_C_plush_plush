#include<iostream>
using namespace std;
//Function overloading
void AreaIs(int a)
{
    cout<<"Area of Square is-->"<<a*a<<endl;
}
void AreaIs(double r)
{
    cout<<"Area of circle is-- >"<<3.14*r*r<<endl;
}
void AreaIs(double l,double b)
{
    cout<<"Area of Rectangel is-->"<<l*b<<endl;

}
void AreaIs(int a,int b)
{
    cout<<"Area of trinagle is->"<<(a*b)/2<<endl;
}
void AreaIs(string a)
{
    int x=stoll(a);
    cout<<"Area of cube is-->"<<x*x*x<<endl;
}
int main()
{
    AreaIs(10.6,10.1);
    AreaIs(10,10);
    AreaIs(10);
    AreaIs(10.10);
    AreaIs("10");
}