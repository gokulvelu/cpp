#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
if(a>b&&a>c)
cout<<"A is large";
else if(b>a&&b>c)
cout<<"B is large";
else
cout<<"C is large";
return 0;
}
