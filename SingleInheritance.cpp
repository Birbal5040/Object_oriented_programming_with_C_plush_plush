#include<iostream>
using namespace std;
class vehicle
{
    public:
    int enginesize;
    int tyresize;
    string company_name;
    int lenght;
    
};
class bike:public vehicle
{
    int handlesize;
};
int main()
{
   bike honda,bmw,tvs;
   honda.enginesize=10;
   honda.tyresize=15;
   cout<<honda.enginesize<<endl;
   cout<<honda.tyresize;
}
