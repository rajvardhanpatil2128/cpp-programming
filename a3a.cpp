#include<iostream>
using namespace std;
class complex 
{
    private:
    int real,imag;
    public:
    complex(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    complex add(const complex &c)
    {
        return complex(real + c.real,imag +c.imag);
    }
    complex sub(const complex &c)
    {
        return complex(real - c.real,imag -c.imag);
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    complex c1(4,5),c2(6,7);
    complex sum=c1.add(c2);
    complex diff=c1.sub(c2);
    cout<<"enter first complex number: "<<endl;
    c1.display();
    cout<<"enter second complex number: "<<endl;
    c2.display();
    cout<<"addition :";
    sum.display();
    cout<<"substraction :";
    diff.display();
    return 0;


}