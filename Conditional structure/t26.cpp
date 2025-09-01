#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter azlae mosalas:"<<endl;
    cin>>a>>b>>c;
    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
        cout<<"right angled"<<endl;
    else
        cout<<"not right anged"<<endl;    
}