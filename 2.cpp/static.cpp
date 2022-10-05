#include <iostream>
using namespace tsd;
class T
{
  static int a;
  int b;
};
int T ::a;
int main()
{
  
  cout<< sizeof(T);
  return 0;
}
