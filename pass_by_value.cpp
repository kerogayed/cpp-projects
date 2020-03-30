#include <iostream>
using namespace std;



void pass_by_value (int a)
{  
    cout << "a1: " << a <<endl;   
   a=1000;
   cout << "a2: "<< a << endl;
}


int main()
{
  int a {10} ;
    pass_by_value(a);
    cout << "a3: "<< a <<endl;
}