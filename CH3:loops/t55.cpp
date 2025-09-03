#include<iostream>
using namespace std;
int main()
{
    int n,max=0;
    cout<<"enter a number:"<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>n;
    if(n>max)
         max=n;
    }
    cout<<"n is big:"<<max<<endl;
}
