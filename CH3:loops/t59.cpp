#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<'\t'<<i;
    }
}