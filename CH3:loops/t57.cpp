#include<iostream>
using namespace std;
int main()
{
    // پیدا کردن اعداد زوج دورقمی بخش پذیر بر 3
    for(int i=10;i<99;i++)
    {
        if(i%2==0 && i%3==0)
            cout<<"numbers bakhsh pazir bar 3:"<<i<<endl;
    }
}