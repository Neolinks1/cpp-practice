#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,avg;
    cout<<"enter your number:"<<endl;
    for(int i=1;i<=5;i++)
    {
        cin>>n;
        sum=sum+n;
    }
    avg=sum/5;
    cout<<"sum="<<sum<<'\n'<<"avg="<<avg;
}