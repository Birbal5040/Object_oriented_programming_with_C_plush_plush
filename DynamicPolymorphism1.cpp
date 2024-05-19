#include<iostream>
using namespace std;
class name
{
    public:
  virtual  void show()
    {
        cout<<"I am ready for internship"<<endl;
    }
};
class kumar:public name
{     
    public:
     void show()
     {
        cout<<"Yes, I am ready"<<endl;
     }
};
int main()
{
     name birbal;
     birbal.show();
    kumar gulshan;
    gulshan.show(); 
}