#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the azlae mosalas:"<<endl;
    cin>>a>>b>>c;
    if(a*a == b*b+c*c)
    {
        cout<<"right angled"<<endl;
    }
    else
        if(b*b == a*a+c*c)
            cout<<"right angled"<<endl;
        else
            if(c*c==a*a+b*b)
                cout<<"right angled"<<endl;  
                
        else
            cout<<"not right angled"<<endl;        
}  
