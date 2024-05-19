#include<iostream>
using namespace std;
class Student  //user define data type
{
    public:
    string name;
    int height;
    float lenght;

};
int main()
{
    Student gulshan;
    gulshan.name="BIRBAL";
     gulshan.height=165;
      gulshan.lenght=160;
      cout<< gulshan.name<<endl;
      cout<< gulshan.height<<endl;
     cout<< gulshan.lenght;
}