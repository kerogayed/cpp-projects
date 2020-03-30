#include <iostream>
using namespace std;
int main()
{
     int user_input {0};
     cout << "Enter number in cents: ";
     cin>> user_input;
     int dollars {0};
     int quarters {0};
     int dimes {0};
     int nickle {0};
     int pennies{0};
    while (user_input >= 100)
    {
      user_input = user_input - 100;
      dollars = dollars +1     ;
    }

    while (user_input >= 25)
    {
       user_input = user_input - 25;
       quarters = quarters +1;
    }
    while (user_input >= 10)
    {
      user_input = user_input - 10;
      dimes=dimes+1;
    }
    while (user_input>= 5)
    {
      user_input = user_input - 5;
      nickle = nickle + 1;
    }
    while( user_input >=1)
    {
      user_input = user_input - 1 ;
      pennies = pennies +1;
    }

cout << "dollars: "<<dollars<<endl;
cout<< "quarters: "<<quarters<<endl;
cout<< "dimes: "<<dimes<<endl;
cout<< "nickle: "<<nickle<<endl;
cout<< "pennies: "<<pennies<<endl;






}
//sudo code:
//***********
   // 1. define a variable input from user
   // 2. if
