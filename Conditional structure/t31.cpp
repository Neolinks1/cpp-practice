#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cout<<"enter the numbers of a,b,c for mosalas equilateral="<<endl;
    cin>>a>>b>>c;
    if(a>b){
        max=a;
        if(c>max)
        max=c;
    }
    else
    {
        max=b;
        if(c>max)
        max=c;
    }
    cout<<"max is ="<<max;


}