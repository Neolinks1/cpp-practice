#include<iostream>
using namespace std;
int main()
{
    int salary,net_salary,tax,insurance;
    cout<<"enter your salary:"<<endl;
    cin>>salary;
    tax=salary*0.1;
    insurance=salary*0.17;
    net_salary=salary-tax-insurance;
    cout<<"net_salary="<<net_salary<<endl<<"tax="<<tax<<endl<<"insurance="<<insurance;
    
}