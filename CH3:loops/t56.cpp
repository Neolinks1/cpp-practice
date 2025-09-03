#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the first number:"<<endl;
    cin>>n;
    int max=n;
    int min=n;
    for(int i=0;i<6;i++)
    {
        cout<<"enter number"<<i<<':'<<endl;
        cin>>n;
        if(n>max)
            max=n;
        if(n<min)
              min=n;    
    }
    cout<<"max number:"<<max<<'\t'<<"min number:"<<min;
}