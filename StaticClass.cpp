#include<iostream>
using namespace std;
class bike
{
	public:
    static int noofbike;
	int enginesize;
	int tyresize;
	bike(int enginesize,int tyresize)
	{
		this->tyresize=tyresize;
		this->enginesize=enginesize;
		cout<<"constructor called hua"<<endl;
		
	}
	~bike()
	{
		cout<<"Destructor called hua"<<endl;
	}
};
int bike::noofbike=100;
void print()
{
    static int a=37;
    cout<<a<<endl;
    a++;
}
int main()
{
    // print();
    // print();
    // print();
 bike honda(23,43),bmw(34,65),tvs(23,87);
// cout<<honda.enginesize<<endl;
// cout<<bmw.enginesize<<endl;
// cout<<tvs.enginesize<<endl;
cout<<honda.noofbike<<endl;

}