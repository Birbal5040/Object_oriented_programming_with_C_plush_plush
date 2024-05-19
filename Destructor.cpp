#include<iostream>
using namespace std;
class bike
{
     public:
    int tyresize;
    int enginesize;
   
    bike(int tyresize,int enginesize)
    {
        this->tyresize=tyresize;
        this->enginesize=enginesize;
        cout<<"constructor is called"<<endl;

    }
    ~bike()
    {
        cout<<"destructor called hua:"<<endl;
    }

};
int main()
{
 bike tvs(34,54);
 bike honda(43,67);
 bike bmw(56,87);
cout<<tvs.enginesize<<endl;
cout<<honda.enginesize<<endl;
cout<<bmw.tyresize<<endl;
}