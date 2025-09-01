#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter the numbers:"<<endl;
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<'\n'<<"b="<<b;

}