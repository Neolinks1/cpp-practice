#include<iostream>
using namespace std;
int main()
{
    int count=0;
    cout<<"type state ment and enter to end: "<<endl;
    while(cin.get()!='\n')
        count++;
    cout<<"length of state ment:"<<count<<endl;
}