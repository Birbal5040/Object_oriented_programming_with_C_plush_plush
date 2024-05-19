#include<iostream>
using namespace std;
class vehicle

{
    public:
    int a_ka_scope;
    int a_ka_power;
    virtual void show()
    {
        cout<<"a called hua"<<endl;
    }
    virtual void print()
    {
        cout<<"this is my journy"<<endl;
    }
};
class bike:public vehicle
{   
    public:
    int b_ka_scope;
     void show()
    {
        cout<<"b called hua"<<endl;
    }
    void print()
    {
        cout<<"this is my my life"<<endl;
    }
};
int main()
{
        vehicle*e;
    // e=&obj;
    // e->show();
    // e->print();
    e=new bike;
    e->show();
    cout<<sizeof(vehicle)<<endl;
    cout<<sizeof(bike)<<endl;

}