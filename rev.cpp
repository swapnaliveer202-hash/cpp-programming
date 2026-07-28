#include<iostream>
using namespace std;
int main()
{
int a;
cin>>a;
int reverse = 0;
int rem;
a % 10;
while (a|=0)
{
rem=a%10;
reverse=reverse*10+rem;
a=a/10;
}
cout<<"reverse number="<<reverse;
return 0;
}
 
 
 
