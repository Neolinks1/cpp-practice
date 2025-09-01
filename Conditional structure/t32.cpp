#include<iostream>
using namespace std;
int main()
{
    int score;
    cout<<"please enter your score dear studnt :)"<<endl;
    cin>>score;
    if(90<=score && score<=100)
        cout<<"excellent"<<endl;
    else if(80<=score && score<90)
    {
        cout<<"very good"<<endl;
    }    
    else if(70<=score && score<80)
    {
        cout<<"good"<<endl;
    }
    else 
        cout<<"fail"<<endl;
    








}