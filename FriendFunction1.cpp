#include<iostream>
using namespace std;
class A
{
    int a_ka_value=10;
    public:
    friend void show(A &b);
};
void show(A &b)
{
    cout<<b.a_ka_value;
}
int main()
{
    A b;
    show(b);
}