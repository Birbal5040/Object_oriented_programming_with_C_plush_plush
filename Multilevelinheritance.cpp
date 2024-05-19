#include<iostream>
using namespace std;
class vehicle{
    public:
    int enginesize;
    int tyresize;
};
class car:public vehicle
{
    public:
    int handlsize;
};
class bike:public vehicle,car
{
    public:
    int lenght;
};
int main()
{
    bike honda;
    honda.vehicle::enginesize=10;
    cout<<honda.enginesize;
}