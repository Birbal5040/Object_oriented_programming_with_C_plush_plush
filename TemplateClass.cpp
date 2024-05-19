#include<iostream>
using namespace std;
template<class T>
class person
{
    public:
   T age, T name,T height;
   person(T age,T name,T height)
   {
    cout<<"Enter your age:"<<endl;
    cin>>age;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Enter your height:"<<endl;
    cin>>height;

   }
   void print()
   {
    cout<<"your age is:"<<age<<endl;
    cout<<"your name is:"<<name<<endl;
    cout<<"your height is:"<<endl;
   }
};
int main()
{
    person gulshan()
}