#include<iostream>
using namespace std;
class Person
{
    private:
    int age;
    string name;
    float score;
    public:
    void input()
    {
      cout<<"Enter your age :";
      cin>>age;
      cout<<"Enter your score:";
      cin>>score;
      cout<<"Enter your name:";
      cin>>name;
    }
    void show()
    {
        cout<<"your age :"<<age<<endl;
        cout<<"your score:"<<score<<endl;
        cout<<"your name :"<<name<<endl;

    }
};
int main()
{
    Person gulshan,ankit,birbal;
    gulshan.input();
    gulshan.show();
}