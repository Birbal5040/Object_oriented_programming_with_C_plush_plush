/*-->polymorphism is a concept in which object can be treated in different ways
 1) ->>static polymorphism.
2) ->> dynamic polymorphism.
*/
// it is also called compile-time polymorphism
#include<iostream>
using namespace std;
void sum(int a,int b)
{
  cout<<a+b<<endl;
}
void sum(double salary)
{
    cout<<salary<<endl;
}
void sum(string n)
{
    cout<<n<<endl;
}
int main()
{
    sum(23,54);
    sum(56.7);
    sum("name");

}