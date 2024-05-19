#include<iostream>
using namespace std;
class a
{
    public:
    int a_ka_scope;
    virtual void show()
    {
        cout<<"a called hua"<<endl;
    }
    virtual void print()
    {
        cout<<"this is my journy"<<endl;
    }
};
class b:public a
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
    //b obj;
   // a obj2;
    //obj2.show();
    //obj.a::show();
    //obj.b::print();
    //obj.print();
    a*e;
    // e=&obj;
    // e->show();
    // e->print();
    e=new b;
    e->show();
    cout<<sizeof(a);

}