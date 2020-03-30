#include <iostream>
using namespace std;
int main()
{                                        //user interface

cout << "Welcome To MY Trasformation Project" <<endl<<endl;
cout << "1.DO you want to transform f to c" <<endl;
cout<<  "2.DO you wantt to transform c to f"<<endl;
int user_choose;
cin>> user_choose;  //the choise of the user
 
double degree_in_f  {};  //define two constants of the input user
double degree_in_c {} ;

                    //main scripts
         if (user_choose==1)
         {
           cout<<endl << "enter the fahrenheit: " ;
           
           cin>> degree_in_f;
           degree_in_c =  (degree_in_f - 32.0) * 5/9 ;
           cout<< endl<<"degree in celesius is " << degree_in_c <<endl;  
         }    
         else if(user_choose==2 )
         {
          cout<<endl << "enter the celesius: ";
           
           cin>> degree_in_c;
           degree_in_f  = (degree_in_c * 1.8)+32 ;
           cout<< endl<<"degree in fahrenheit is " << degree_in_f<<endl;   
             
         }
    
    
    
} 

    

/* 1.declare a constatant and intialize it to 33.8
   2.print if the user want to transform f to c or c to f
   3.if the user chose to transform f to c it will excute the f to c script
   4..if the user chose to transform c to f it will excute the c to f script
   */
