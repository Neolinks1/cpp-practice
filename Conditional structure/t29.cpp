#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,r1,r2,delta;
    cout<<"enter the numbers of a,b,c:"<<endl;
    cin>>a>>b>>c;
    delta=(b*b)-4*a*c;
    r1=(-b+sqrt(delta))/2*a;
    r2=(-b-sqrt(delta))/2*a;
    cout<<"result of delta="<<delta<<endl<<"result of r1="<<r1<<'\t'<<"result of r2="<<r2<<endl;
}