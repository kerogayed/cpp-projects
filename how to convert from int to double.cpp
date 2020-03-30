#include <iostream>
using namespace std;
int main()
{
   cout << "Welcome to how to calculate a numbers: "<<endl;
   cout<< "*****************************************"<<endl;
   cout << "Choose one of your favourite: "<< endl <<endl;
   cout << "1.calculate the average of integers--" <<endl 
   << "2.calculate the average of integers and transforme it to double-- "<<endl;
   int User_choise {0};
   cin >> User_choise;
                                int n1{} , n2{} , n3 {};
                                double average {};
                                const int total_numbers {3};
   
      if(User_choise==1)
      {
 
        cout << "enter numbers: "<<endl;  
        cin >> n1 >> n2 >> n3;  
        average = (n1+n2+n3)/total_numbers;
        cout <<average<<endl;
       }
       else
       {
        cout << "enter numbers: "<<endl;  
        cin >> n1 >> n2 >> n3;  
        average =  static_cast <double> ((n1+n2+n3))/total_numbers;///////////////////////////////////////////************************////////**************
        cout << average<<endl;
          
           
         }    
    
}