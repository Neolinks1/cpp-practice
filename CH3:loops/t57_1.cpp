#include<iostream>
using namespace std;
int main()
{
    for(int i=10;i<99;i++)
    {
        if(i-int(i/3)*3 == 0)
              cout<<"numbers bakhsh pazir bar 3:"<<i<<endl;
    }
    return 0;
}
