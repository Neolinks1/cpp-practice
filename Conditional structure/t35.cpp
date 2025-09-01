#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"enter your numbers:"<<endl;
    cin>>a>>b;
    cin>>c;
    switch(c)
    {
        case '+':
            cout<<"a+b="<<a+b<<endl;
            break;
            case '-':
                cout<<"a-b="<<a-b<<endl;
                break;
                case '*':
                    cout<<"a*b="<<a*b<<endl;
                    break;
                    case '/':
                        cout<<"a/b="<<a/b<<endl;
    }
}