#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    string name;
    int rollno;
    int marks;

    public:
    void getdata()
    {
    cout<<"enter name "<<endl;
    cin>>name;
    cout<<"enter rollno"<<endl;
    cin>>rollno;
    cout<<"enter marks"<<endl;
    cin>>marks;
    }
    void setdata()const
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"Marks"<<marks<<endl;
    }
};
int main()
{
    student s;
    s.getdata();
    s.setdata();

    return 0;
}



