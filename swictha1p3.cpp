#include<iostream>
using namespace std;
int main()
{
    int choice;
    int a,b;

    cout<<"1. addition"<<endl;
    cout<<"2. substract"<<endl;
    cout<<"3.division"<<endl;
    cout<<"4.modulus"<<endl;

    cout<<"enter the choice"<<endl;
    cin>>choice;

    if(choice>=1 && choice<=5)
    {
        cout<<"enter the two numbers"<<endl;
        cin>>a;
        cin>>b;
    }
    switch(choice)
    {
        case 1:
        cout<<"result="<<a+b<<endl;
        break;
        case 2:
        cout<<"result"<<a-b<<endl;
        break;
        case 3:
        if(b!=0)
        cout<<"result="<<a/b<<endl;
        else
        cout<<"division not valid"<<endl;
        break;
        case 4:
        if(b!=0)
        cout<<"result="<<a%b<<endl;
        else
        cout<<"division not valid"<<endl;
        break;
        default:
        cout<<"invalid choice"<<endl;
    }
    return 0;

}