#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter 2 number:"<<endl;
    cin>>x>>y;
    if(x<y)
    {
         for(int i=x;i<=y;i++)
         {
            if(i%2 ==0)
            {
                cout<<"this number id even:"<<i<<endl;
            }
         }
    }
}