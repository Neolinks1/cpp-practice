#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the numbers of azlae mosalas:"<<endl;
    cin>>a>>b>>c;
    if(a==b)
        if(b==c)
            cout<<"equilateral"<<endl;
        else
            cout<<"not equilateral"<<endl; 
    else
        cout<<"not equilateral"<<endl;         
}