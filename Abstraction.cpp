/* Abstraction means-----
*/
#include<iostream>
using namespace std;
class car
{
   bool startengine;
   public:
   void start()
   {
       cout<<"car is start:"<<endl;
       startengine=true;
   }
   void derive()
   {
      if(startengine)  cout<<"\nyou can derive now:";
      else cout<<"\nyou can not derive car:";
   }
};
int main()
{
   car bmw;
   
   bmw.start();
   bmw.derive();
}