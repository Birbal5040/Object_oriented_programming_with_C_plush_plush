//it is help to hiding data
/*
#include<iostream>
using namespace std;
class Encap//user define data type
{
    public:
    int age;
    string name;
    
};
int main()
{
    Encap hi;
    hi.name="kumar";
    hi.age=12;
    cout<<hi.name<<endl;
    cout<<hi.age<<endl;
}
*/
//--------***---------.
#include<iostream>
using namespace std;
class Encap//user define data type
{
    int age;
    string name;
    int n;
    int Table()
    {
        if(n==1) cout<<1<<endl;
        else if(n==0) cout<<0<<endl;
       else
       {
        for(int i=1;i<=10;i++)
        {
            cout<<i*n<<" ";
        }
        cout<<endl<<"Thanks!!";
       }
    }
    public:
    void input()
    {
        cout<<"Enter your age-->"<<endl;
        cin>>age;
        cout<<"Enter your name-->"<<endl;
        cin>>name;
        
    }
    void show()
    {
        cout<<"your name is "<<name<<endl;
        cout<<"your age is = "<<age<<endl;
        cout<<"Enter your digit that is want to table:"<<endl;
        cin>>n;
        cout<<"your table is "<<endl;
        Table();

    }
};
int main()
{
    Encap hiding;
    hiding.input();
    hiding.show();
}