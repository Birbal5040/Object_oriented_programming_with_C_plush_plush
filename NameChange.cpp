#include<iostream>
using namespace std;
class Student
{
    public :
    string name;
    int score;
    float strikerate;
    Student(string name,int score,float strikerate)
    {
        this->name=name;
        (*this).score=score;
        (*this).strikerate=strikerate;
    }
    void change(Student &s)
    {
        s.name="Birbal";
    }
};
int main()
{
    Student s("Ankit",410,123.5);
    cout<<s.name<<endl;
   // s.change(s);
    s.name="Birbal";
    cout<<s.name<<endl;
    Student*ptr=&s;
    (*ptr).name="rishi";
     ptr->name="rishi";
    cout<<s.name<<endl;
}