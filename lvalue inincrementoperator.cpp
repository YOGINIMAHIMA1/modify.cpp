#include <iostream>
using namespace std;
int main()
{
  int a=8,b=7; // a and b are l value and 7 is r value
  int c=++(a*b+2); //error in this line [L Value required]
  cout<<"c:"<<c<<endl;
  return 0;
}
/* o/p- compile-time Error
         [ L-value Required]
         l value is always a variable which has it's own memory location.
         constants and expression are not lvalue they are rvalue it means they does not have their memory location.
         e.g- 5,2,(a+b)
         -lvalue i.e i,a,*p,arr[],struct,union every lvalue can be modofiable i.e we can update them except array and const.
         -const int a=7;---- it cannot be modofiable.
         -l value stands for locator value.
         9=a;// here 9 is rvalue and a is lvalue this line show error because 9 has no memory location so it cannot be at left side it should be at right side.
         a+2= c;// error a+2 is rvalue(expression) it cannot be place at left hand side as it does have any location.and c is lvalue.
         a=b+3; //correct a is lvalue it has its own memory location so it is place at left side.
         int arr[23] ;// valid it is an lvalue arr itself is anlvalue
         
         *(p+2)=90;// this expression is valid . expression has lvalue.
         struct S(int m);
         struct S obj ;
               // obj and obj.m are lvalues.
               &a= p; //&a is an rvalue: this line has error
         */
