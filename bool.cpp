#include <iostream>
using namespace std;
int main()
{                                        bool the_result{0};
                                   const int wind_speed_egypt {20};
                                   const int weather_temp_egypt{24};
  cout <<endl;   
  cout <<"Welcome to know what to wear in this evening:-  "<<endl;
  cout <<"*************************************************"<<endl;
       int user_wind_speed{0};
       cout << "Enter your wind speed: ";
       cin >> user_wind_speed << endl;
       
       int user_weather_temp{0};
       cout << "Enter your weather temperature: "
       cin >> user_weather_temp << endl;
 
   the_result = (user_wind_speed > wind_speed_egypt || user_weather_temp > weather_temp_egypt)
    
          
cout << endl;    
}
//Algorithm:
//*************
  // 1. define a standard wind speeed in egypt
  // 2. define a standard weather temperatures in egypt as a constant 
  // 3.  define a 2 variable which take info from the user to the wind speed and weather 
 