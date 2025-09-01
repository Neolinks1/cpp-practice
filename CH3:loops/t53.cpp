#include<iostream>
using namespace std;
int main()
{
    int nr,m,j=0;
    cout<<"enter number of class"<<endl;
    cin>>m;
    for(int i=1;i<m;i++)
    {
        cout<<"enter nomre riazi:"<<endl;
        cin>>nr;
        if(nr<70)
        {
            cout<<"mardood shode"<<endl;
            j++;
        }
    }
    cout<<"tedad mardood shode ha="<<j;
}