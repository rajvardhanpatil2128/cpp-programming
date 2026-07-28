#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the value:";
cin>>n;
int original =n;
int rev=0;
while(n>0)
{
int digit =n%10;
rev=rev*10+digit;
n=n/10;
}
cout<<rev;
if(original==rev)
{
cout<<"the no is palindrome"<<endl;
}
else
{
cout<<"num is not palindrome"<<endl;
}

return 0;
}
