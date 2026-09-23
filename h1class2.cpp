#include<iostream>
using namespace std;

class employee
{
private:
    int a, b;

public:
    int c, d;

    // Function to take private values
    void setdata()
    {
        cout << "Enter value of a: ";
        cin >> a;

        cout << "Enter value of b: ";
        cin >> b;
    }

    void getdata()
    {
        cout << "\nThe value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
    }
};

int main()
{
    employee emp;

    // Taking private values through public function
    emp.setdata();

    // Taking public values directly
    cout << "Enter value of c: ";
    cin >> emp.c;

    cout << "Enter value of d: ";
    cin >> emp.d;

    // Display all values
    emp.getdata();

    return 0;
}