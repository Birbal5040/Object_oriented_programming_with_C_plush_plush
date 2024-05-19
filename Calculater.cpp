#include<iostream>
using namespace std;
class Calculater
{
    public:
    int a;
    float b;
    int sum(int a,float b)
    {
        return (a+b)*(a+b);
    }
    // int mul(int a,float b)
    // {
    //     retrun a*b;
    // }
    // void show()
    // {

    // }
};
int main()
{
    Calculater c;
    cout<<c.sum(3,5);
}