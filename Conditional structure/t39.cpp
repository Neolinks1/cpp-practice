#include<iostream>
using namespace std;
int main()
{
    int num,n,count,sum=0;
   float avg;
    cout<<"enter count of number:"<<endl;
    cin>>count;
    cout<<"enter your numbers:"<<endl;
    for(int i=0 ;i<=count;i++ )
    {
        cin>>n;
        sum=sum+n;
    }
    avg=(float)sum/count;
    cout<<"your cunt of number:"<<count<<'\t'<<"sum="<<sum<<'\t'<<"avg is="<<avg<<endl;
}