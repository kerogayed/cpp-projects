#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
      cout << "Welcome to My Project :- "<<endl;
      cout << "***************************" << endl;
     char User_input {};                           // user input
       vector <int> punsh_of_numbers {};       // declaring the vector which loop on the project
    do
    {
     cout << "P - Print numbers\n";
     cout << "A - Add a number\n";
     cout << "M - Display the mean of numbers\n";            // the form which user chooser from
     cout << "S - Display the smallest number\n";
     cout << "L - Display the largest number\n";
     cout << "Q - Quit\n" << endl;
     cout << "Enter your choise: ";
     cin  >> User_input;
     cout << endl;

      /********************************************************/



         if (User_input == 'P' || User_input == 'p' )                    //first input
         {
                      if (punsh_of_numbers.size() == 0)                  //determinate there is no number if the vector is empty
                              cout << "there is No numbers\n"<<endl;
                      else
                      {
                                         cout << "[";
                              for (auto roller : punsh_of_numbers)      //loop around the vector and print out the numbers in form.
                              {
        /*********************************************************************/
                                     cout << " "  << roller <<" ";
                                     if (roller == punsh_of_numbers.at(punsh_of_numbers.size()-1))
                                         cout<< "]" << endl;
                                     else
                                         cout << ",";
                              }
                              cout <<endl;
                       }

         }
         else if (User_input == 'A' || User_input == 'a' )
         {
                       int num_added_by_user{};
                        cout << "Please Enter A Number: ";
                        cin >> num_added_by_user;
                        cout<<endl;
             punsh_of_numbers.push_back(num_added_by_user);


         }
         else if (User_input == 'M' || User_input == 'm')
         {
                if (punsh_of_numbers.size()==0)
                {
                    cout << "Unable to calculate the mean - No Data ";


                }
                else
                {
                    auto the_sum_of_vectors {};
                    for (auto roller: punsh_of_numbers)
                        the_sum_of_vectors += roller;
                    cout << "The mean of the vector: " << the_sum_of_vectors/punsh_of_numbers.size()<< endl;

                }
                 cout <<endl << endl;;
          }
          else if (User_input == 'S' || User_input == 's')
          {
             cout << "the minimal element : " << *min_element(punsh_of_numbers.begin(), punsh_of_numbers.end()) << endl << endl;
          }
          else if (User_input == 'L' || User_input == 'l')
          {
             cout << "the maximum element : " << *max_element(punsh_of_numbers.begin(), punsh_of_numbers.end()) << endl << endl;
          }

    }
     while (User_input != 'Q' && User_input != 'q');
     cout << "Good Bye\n";
}
