//protected-->1)Member of this class
 //           2) friend of this class
#include<iostream>
using namespace std;
class a
{
    private:
    int d,e;
    public:
    void sum()
    {
        cout<<"Enter two number:"<<endl;
        cin>>d>>e;
        cout<<d+e<<endl;

    }
    friend class b;
};
class b
{
    public:
    void sum(a ref)
    {
        //  ref.d=30;
        //  ref.e=90;
        //  cout<<ref.d+ref.e<<endl;
        cout<<"Enter number"<<endl;
        int x=ref.d;
        int y=ref.e;
        cin>>x>>y;
        cout<<x*y<<endl;
    }
};
int main()
{
    a obj;
    obj.sum();
    b obj2;
    obj2.sum(obj);
}