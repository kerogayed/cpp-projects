#include <string>
#include <iostream>
using namespace std;
int main()
{
 cout << "substrings" <<endl;
 string s1 {"this is CS50"};
 cout << s1.substr(0,4) << endl;  //tell me the four char. from number 0
 cout << s1.substr(5,2) << endl;
 cout << s1.substr(8,4) << endl;
   cout << s1.find("this") <<endl;
   cout << s1.find("is") <<endl;   //easily find is
   cout << s1.find("CS50") <<endl;  //easily find cs50
      cout << s1.find('i' , 5) <<endl; //start counting from number 5
        cout << s1.erase(0,5) <<endl;
        cout << s1.erase(5,2) <<endl;  //#1

                                     //s1.clear();
        getline(cin , s1);
        cout << s1 << endl;
}
