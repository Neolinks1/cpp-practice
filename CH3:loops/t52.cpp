#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n,sum=0,avg;
    cout<<"ente numbr of course:"<<endl;
    cin>>m;
    for(int i=1;i<m;i++)
    {
        cout<<"enter your nomre:"<<endl;
        cin>>n;
        sum=sum+n;

    }
    avg=sum/m;
    cout<<"avg is="<<avg;
}