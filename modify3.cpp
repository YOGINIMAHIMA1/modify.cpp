#include<iostream>
using namespace std;
int main()
{
  int a=11,b=23,c=33;
  int d=b-a++ ;
  int e=++c>=a--<b;
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<d<<endl;
  cout<<e<<endl;
  return 0;
}
