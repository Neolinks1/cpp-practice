#include<iostream>
using namespace std;
int main()
{
    int salary;
    cout<<"enter your salary:"<<endl;
    cin>>salary;
    if(0<salary && salary<100000)
    {
        cout<<"net salary="<<salary<<endl;
    }
    else if(100000<salary && salary<130000)
    {
        salary=salary-(salary*0.05);
        cout<<"net salary="<<salary<<endl;
    }
    else if(130000<salary && salary<180000)
    {
        salary=salary-(salary*0.12);
        cout<<"net salary="<<salary<<endl;
    }
      else if(salary>180000)
    {
        salary=salary-(salary*0.18);
        cout<<"net salary="<<salary<<endl;
    }

}