#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vector1 ; //declaring vector1
    vector <int> vector2 ; // declaring vector2

    //intializing vector1 to {10,20}

      vector1.push_back(10);
      vector1.push_back(20);                                                                                
  //====================================================//
    cout<< endl << endl;
    // display vector1


cout<< "vector1 first num: "<< vector1.at(0)<<endl;
cout << "vector1 second num: "<<vector1.at(1)<<endl;
cout << "vector1 size: "<<vector1.size()<<endl;
  //===================================================//

         //intializing vector2 to {100,200}
        vector2.push_back(100);
        vector2.push_back(200);
    //================================================//
   cout<<endl<<endl;
        //display vector2


cout<<"vector2 first num: "<<vector2.at(0)<<endl;
cout <<"vector2 second num: "<<vector2.at(1)<<endl;
cout <<"vector2 size: "<< vector2.size()<<endl;
   //================================================//
cout<<"==============================================";
cout << "\nTwo demintion vector"<<endl;
cout<< "=============================================";
   //================================================//
                //declaring 2d vector
   vector <vector<int>> vector_2nd;
   vector_2nd.push_back(vector1);
   vector_2nd.push_back(vector2);

   //================================================//
             //display the content of vector2d
   cout<<endl;
   cout<<"vector 2d 00: "<<vector_2nd.at(0).at(0)<<endl;
   cout<<"vector 2d 01: "<<vector_2nd.at(0).at(1)<<endl;
   cout<<"vector 2d 10: "<<vector_2nd.at(1).at(0)<<endl;
   cout<<"vector 2d 11: "<<vector_2nd.at(1).at(1)<<endl;

   //=================================================//

   vector1.at(0)=1000;
   cout<<vector1.at(0)<<endl;
   //=================================================//
              //display the content of vector2d again
   cout<<endl;
   cout<<"vector 2d 00: "<<vector_2nd.at(0).at(0)<<endl;
   cout<<"vector 2d 01: "<<vector_2nd.at(0).at(1)<<endl;
   cout<<"vector 2d 10: "<<vector_2nd.at(1).at(0)<<endl;
   cout<<"vector 2d 11: "<<vector_2nd.at(1).at(1)<<endl;
  //====================================================//
       cout<< endl << endl;
    // display vector1 again


cout<< "vector1 first num: "<< vector1.at(0)<<endl;
cout << "vector1 second num: "<<vector1.at(1)<<endl;
}
