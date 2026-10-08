#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int units;
    double bill=0;
    cout<<"enter consumer name"<<endl;
    cin>>name;
    cout<<"enter consumed units";
    cin>>units;
    if(units<0)
    {
     cout<<"invalid units consumed"<<endl;
    }
    if(units<=100)
    {
    bill=units*5;

    }
    else if(units<=200)
    {
        bill=(100*5)+(units-100)*7;
    }
    else if(units<=300)
    {
        bill=(100*5)+(100*7)+(units-200)*9;
    }
    else
    {
        bill=(100*5)+(100*7)+(100*9)+(units-300)*12;
    }
    cout<<"consumer name :"<<name<<endl;
    cout<<"units consumed :"<<units<<endl;
    cout<<"total bill Rs. :"<<bill<<endl;
    return 0;
}