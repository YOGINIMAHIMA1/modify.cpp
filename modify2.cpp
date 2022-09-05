#include<iostream>
using namespace std;
int main()
{
 int a=1,b=2,c=3;
 int d=a++ +b-- ;
 int e= ++d - c-- + a++;
 cout<<a<<endl;
 cout<<b<<endl;
 cout<<c<<endl;
 cout<<d<<endl;
 cout<<e<<endl;
 return 0;
 }
