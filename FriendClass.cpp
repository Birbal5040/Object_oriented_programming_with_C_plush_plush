#include<iostream>
using namespace std;
class add
{
   int a=10,b=20;
//    public:
//    void show()
//    {
//       cout<<a<<" "<<b<<endl;
//    }
   friend class B;
};
class B
{
  public:
  void sow(add &r)
  {
     int c=r.a+r.b;
     cout<<"addition is: "<<c<<endl;
  }
};
int main()
{
   add bb;
   //bb.show();
   B aa;
   aa.sow(bb);
   
}