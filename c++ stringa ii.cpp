#include <string>
#include <iostream>
using namespace std;
int main()
{
 string s1 {"kerogayed"};
 for (unsigned int i {0} ; i < s1.length() ; i++ ) //we can use auto ---> int but we have a compiler comment usnigned int or size_t
 {
  cout << s1[i]<<endl;
  cout << s1.at(i) <<endl;
 }
}
