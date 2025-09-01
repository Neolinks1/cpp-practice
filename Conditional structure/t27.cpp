#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the azlae mosalas:"<<endl;
    cin>>a>>b>>c;
    if(a==b || a==c || b==c)
        cout<<"isosceles"<<endl;
    else
         cout<<" no isosceles"<<endl;   
}