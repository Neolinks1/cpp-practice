#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter the number:"<<endl;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        if(i%2==1)
        {
            cout<<"i="<<i<<endl;
        }
    }
}