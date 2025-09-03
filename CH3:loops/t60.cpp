#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<'\t'<<i;
            sum=sum+i;
        }
    }
    cout<<'\n'<<"sum of maghsoom alayh="<<sum;
}