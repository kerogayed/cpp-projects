#include <iostream>
using namespace std;
int main()
{
  int x{0};
  int y{0}; 
  cout<<"x: " <<x<<endl;
  cout<<"y: " <<y<<endl;
 /************************/             //second one
 
 x++;
 cout<<"x++: "<<x<<endl;
 x=0;
 
 /************************/
 
  ++x;
  cout<<"++x: "<<x<<endl;
  cout<<"**********************************************************"<<endl;
  
 /************************/
  x=10;  
  y=20;
  cout<<"x: "<<x<<endl;                /*          x=x+1                                      */
  cout<<"y: "<<y<<endl;                 /*          y=x                                       */ 
  y=++x;
  cout<<"y=++x: "<<endl;
  cout<<"x: "<<x<<endl;                        
  cout<<"y: "<<y <<endl;                                                                                        
 /***************************/
  x=10;
  y=20;
  y=x++;                                        /*          y=x                                       */
  cout<<"y=x++: "<<endl;                        /*          x=x+1                                      */          
  cout<<"x: "<<x<<endl;                        
  cout<<"y: "<<y <<endl;
  /****************************/


   
}