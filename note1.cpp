#include <iostream>
using namespace std;
int main()
{
  int c_string_array [] {10,20,30}; //PROBLEM
  c_string_array [3] = 40;
  cout << c_string_array [3] << endl;
 for (int x{0}; x < 4 ;x+=1)
     cout << c_string_array[x] << endl;

}


#include <iostream>
using namespace std;
int main()
{
  int c_string_array [8] {10,20,30};  //OK
  c_string_array [3] = 40;
  cout << c_string_array [3] << endl;
 for (int x{0}; x < 4 ;x+=1)
     cout << c_string_array[x] << endl;

}
