#include<iostream>
using namespace std;
class name
{
   public:
  virtual void show()
   {
    cout<<"Target June"<<endl;
   }
};
class birbal:public name
{
    public:
    void show()
    {
        cout<<"June to July"<<endl;
    }
};
int main()
{
    //  birbal kumar;
    // kumar.name::show();// scope resolution operator 
    name*ptr;
    birbal object;
    ptr=&object;
    ptr->show();


}