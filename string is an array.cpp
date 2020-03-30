#include <iostream>
//#include <cstring> // for c style function
//#include <cctype>> // for character based function
using namespace std;
int main()
{
 cout << "working in c style string " << endl;
 string kero {"kero"};
 for (int x {}; x < kero.size() ; x++ )
 {
  cout << "kero "<< x <<": "<< kero[x]<<endl;
  }

}
