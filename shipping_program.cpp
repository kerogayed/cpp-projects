#include <iostream>
using namespace std;
int main()
{
    cout << "Welcome to kero shipping calculator:" <<endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++" <<endl;

int lenght {};
int width {};
int hieght {};

cout<< "Enter the length of the product: "  ;
cin >> lenght;  cout  << endl;

cout << "Enter the width of the product: "  ;
cin >> width;  cout  << endl;

cout << "Enter the hieght of the product: " ;
cin >> hieght;  cout  << endl;


              if (lenght <= 10 || width <= 10 || hieght <= 10)
                   cout << "we can not ship it" <<endl;


                         cout << "shipping cost is 2.50 "<<endl;

   if ((lenght*width*hieght) >= 100 && (lenght*width*hieght)<500 )
   {
         cout <<   "there is 10% surcharge" <<endl;
         cout << "thee total shipping cost is: "<< (2.50*0.1)+2.5<<endl;

   }
   else if ((lenght*width*hieght)>= 500){
        cout << "there is 25% surcharge " <<endl;
        cout << "thee total shipping cost is: "<< (2.50 *0.25)+2.5<<endl;
   }


}
