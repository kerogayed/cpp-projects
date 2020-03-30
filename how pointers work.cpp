#include <iostream>
using namespace std;

int main(void)
{
    int first_var {};
    string second_var {};

    int *p1 {nullptr};
    string *p2 {nullptr};

  //  cout << p1 << endl;
  //  cout << &p1 << endl;

    p1 = &first_var;

    first_var = 3 ;

    cout << &first_var <<endl;
    cout << first_var <<endl;
    cout << p1 << endl;
    cout << &p1 << endl;




}
