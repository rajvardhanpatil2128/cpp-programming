#include<iostream>
#include<string>
using namespace std;
class employee
{
    private:
    string employeename;
    int employeeid;
    int employeesalary;

    public:
    void getdata()
    {
    cout<<"enter employee name: "<<endl;
    cin>>employeename;
    cout<<"enter employee id: "<<endl;
    cin>>employeeid;
    cout<<"enter employee salary"<<endl;
    cin>>employeesalary;
    }
    void setdata()const
    {
        cout<<"employee name: "<<employeename<<endl;
        cout<<"employee id: "<<employeeid<<endl;
        cout<<"employee salary: "<<employeesalary<<endl;

    }
};
int main()
{
    employee e;
    e.getdata();
    e.setdata();

    return 0;

}