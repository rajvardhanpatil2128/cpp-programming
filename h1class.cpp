#include<iostream>
using namespace std;

class employee
{
    private:
     int a,b;
    public:
     int c,d;
     void setdata(int a1,int b1);
    void getdata(){
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
        cout<<"the value of c is"<<c<<endl;
        cout<<"the value of d is"<<d<<endl;
        
    }
};

void employee :: setdata(int a1,int b1){
    a = a1;
    b = b1;
}
int main()
{
    employee emp;
    emp.c =78;
    emp.d =45;
    emp.setdata(12,13);
    emp.getdata();
    return 0;
}
