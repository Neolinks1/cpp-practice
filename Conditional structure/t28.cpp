#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the number:"<<endl;
    cin>>x;
    if(x==1)
        cout<<"2"<<endl;
    else
        if(x>1)
            cout<<"3x+5="<<3*x+5<<endl;
        else
            if(x<1)
                cout<<"3x-2="<<3*x-2<<endl;    
}