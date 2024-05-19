#include<iostream>
using namespace std;
class A 
{
    private:
    int age;
    int height;
    string name;
    public:
    void show()
    {
        cout<<"my life"<<endl;
    }
    friend class B;
};
class B
{
    public:
    void input(A &a)
    {
        cout<<"Enter your age is:"<<endl;
        cin>>a.age;
        cout<<"Enter your height is:"<<endl;
        cin>>a.height;
        cout<<"Enter your name is:"<<endl;
        cin>>a.name;
        cout<<a.age<<" "<<a.height<<" "<<a.name;
    }
};
int main()
{
    A obj1;
    B obj2;
   // obj2.input(obj1);
   obj1.show();
}
