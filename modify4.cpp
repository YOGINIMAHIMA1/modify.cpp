#include <iostream>
using namespace std;
int main()
{
  int a=11;
  a= ++a * a++;
  cout<<a<<endl;
  return 0;
}
