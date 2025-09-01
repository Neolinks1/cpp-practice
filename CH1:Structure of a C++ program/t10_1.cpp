#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number:"<<endl;
    cin>>a;
    cout<<"(a*a*a)/(a*a+a+1) ="<<pow(a,3)/(pow(a,2)+a+1);
}