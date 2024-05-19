//parameterised constructor
#include<iostream>
using namespace std;
class person
{
    int age;
    double height;
    string name;
    public:
    person(int age,double height,string name)
    {
        this->age=age;
       (*this).height=height;
        this->name=name;

    }
    void show()
    {
        cout<<"your name is--> "<<name<<endl;
        cout<<"your age is--> "<<age<<endl;
        cout<<"your height is--> "<<height<<endl;
         
    }
       
};
int main()
{
    person  gulshan(20,168.3,"Birbal kumar");
   
    gulshan.show();
}