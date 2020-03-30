#include <iostream>
using namespace std ;

int fun (int x = 0){
  if (x == 0)
  {
      x=50;
   }
    return x;
}


int main (void)
{

  cout <<fun(4445);
  return 0;
}
