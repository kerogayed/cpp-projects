#include <iostream>
#include <vector>
using namespace std;
int main()
{
  cout  << "Little practisee of victors and aarays:-  " <<  endl;
  cout << "*********************************************" << endl;

 vector <int> kero {20,30};
 kero.push_back(40);
 cout<< kero.at(0)<<endl;
 cout<< kero.at(1)<<endl;
 cout<< kero.at (2)<<endl;
 cout<< kero.size() << endl;
/*****************************************************************/
vector <char> kero_char {'a', 'b'};
kero_char.push_back('c');
for (int i = 0; i < kero_char.size() ; i++) {
  cout << kero_char[i] << endl;
}
/****************************************************************/
 //blaying around with some arrays
 int array_x [] {10 , 20, 30, 40, 50};
 for (int i = 0; i < 5 ; i++) {
   cout << array_x[i] << endl;
 }
}
