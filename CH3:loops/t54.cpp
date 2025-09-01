#include<iostream>
using namespace std;
int main()
{
    int m,n,x=0,y=0;
    //x == teadad number zoge & y==tedad number fard
    cout<<"enter tedad number:"<<endl;
    cin>>m;
        cout<<"enter the numbers:"<<endl;
    for(int i=1;i<m;i++)
    {
        cin>>n;
        if(n%2==0)
            x++;
        else
        {
            y++;
        }
            
    }
    cout<<"tedad number zoge="<<x<<'\t'<<"tedad number fard="<<y<<endl;
}