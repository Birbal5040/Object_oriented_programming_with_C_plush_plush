#include<iostream>
using namespace std;
class person
{
    public:
    class womain
    {
    int a;
    int b;
    
    public:
    void input()
    {
        cout<<"Enter two number -->"<<endl;
        cin>>a>>b;

    }
    void show()
    {
        cout<<a<<" "<<b;
    }
    };
};
int main()
{
   person::womain birbal;
   birbal.input();
   birbal.show(); 
}