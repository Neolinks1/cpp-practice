#include<iostream>
using namespace std;
int main()
{
    int num,digit;
    int i=0;
    while(1)
    {
        cout<<"enter your number:"<<endl;
        cin>>num;
        do{
            digit=num%10;
            cout<<digit;
            num/=10;
        }
        while(num!=0);
        i++;
        if(i==5)
        break;
    }
}