#include<iostream>
using namespace std;
int b=488;
int main()
{

    int b=49;
    int d=::b;
    cout<<d<<endl; 
//Scope resolution operator is define area of declaration
    //or
    cout<<::b<<endl;
}