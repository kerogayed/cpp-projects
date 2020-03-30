#include <iostream>
using namespace std;
void another_fun (int a)
{
    cout <<"a: " <<a <<endl;
    a=100;
    cout <<"a: " <<a <<endl;

}
int main(void)
{
    
    int b {50};
    another_fun(b);    
    cout << "b: " << b<< endl;
}