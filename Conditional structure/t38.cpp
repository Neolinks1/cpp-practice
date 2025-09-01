#include<iostream>
using namespace std;
int main()
{
       int n;
    cout<<"enter your number:"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
            cout<<"saturday"<<endl;
            break;
            case 2:
                cout<<"sunday"<<endl;
                break;
                case 3:
                    cout<<"monday"<<endl;
                    break;
                    case 4 :
                        cout<<"tuseday"<<endl;
                        break;
                        case 5:
                             cout<<"wednesday"<<endl;
                             break;
                             case 6:
                                cout<<"thursday"<<endl;
                                break;
                                case 7:
                                     cout<<"friday"<<endl;
                                     break;
                                     default:
                                        cout<<"enter a number between 1 to 7";
    }
}