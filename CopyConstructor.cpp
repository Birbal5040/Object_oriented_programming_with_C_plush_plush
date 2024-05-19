#include<iostream>
using namespace std;
class A
{
   public:
   class B
   {
    int a,b;
    public:
    void input()
    {
       cout<<"Enter number:"<<endl;
       cin>>a>>b;
    }
    void show()
    {
        cout<<"a is ="<<a<<endl;
        cout<<"b is ="<<b<<endl;
    }
   };
--->not complete
};
int main()
{
    A ppo;
   // B.ppo::A;
    B.input();
}