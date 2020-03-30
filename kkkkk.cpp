#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int c_string_array [] {10,20,30};
  c_string_array [3] = 40;
  cout << c_string_array [3] << endl;
 for (int x:c_string_array)
     cout << x << endl;

}
