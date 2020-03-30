#include <iostream>
using namespace std;
int main()
{
  while (true)
  {
    cout << "the beginning of the loop : " <<endl;
    int x{};
    cin>> x;
     if (x==0)
       break;
  
  cout << "the end of the loop\n";
  cout<< "Ok" <<endl;
  }
}
