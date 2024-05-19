#include<iostream>
using namespace std;
class base
{
    protected:
    int a,b;
    public:
    void show()
    {
        a=10;
        b=20;
        cout<<a*b<<endl;
    }
};
class derive:protected base
{
    public:
    void sum()
    {
        a=90;
        b=9;
        cout<<a+b<<endl;
    }
};
int main()
{
    // base obj;
    // obj.show();
    derive obj2;
    obj2.sum();
    obj2.show();
}