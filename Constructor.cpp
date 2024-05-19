#include<iostream>
using namespace std;
class Student
{
    public:
    string name ;
    int money;
    float land;
    // Student(string n,int m,float k)
    // {
    //     name=n;
    //     money=m;
    //     land=k;
    // }
    Student (string name,int money,float land)
    {
        this->name=name;
        this->money=money;
        (*this).land=land;//this->land=land;
    }

};
int main()
{
    Student gulshan("BIRBAL",700,45);
    cout<<gulshan.name<<endl;
    cout<<gulshan.money<<endl;
    cout<<gulshan.land;


}