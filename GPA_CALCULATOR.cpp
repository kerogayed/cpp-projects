#include <iostream>
using namespace std;

     // GPA constants
const double maths_hour {3.0};
const double mechanics_hour {3.0};
const double physics_hour {3.0};
const double chemistry_hour {3.0};
const double graphics_hour {3.0};
const double english_hour {2.0};
const double human_rights_hour {1.0};

double maths_gpa {};
double mechanics_gpa {};
double physics_gpa {};
double chemistry_gpa {};
double graphics_gpa {};
double english_gpa {};
double human_rights_gpa {};

double maths ;
double mechanics;
double physics ;
double chemistry ;
double graphics ;
double english ;
double human_rights;

 double maths_2 ;
double mechanics_2;
double physics_2 ;
double chemistry_2 ;
double graphics_2 ;
double english_2 ;
double human_rights_2;


    //functions definetons
double calc_mini_GPA(double a);
double getting_mini_GPA (double maths , double mechanics, double physics , double chemistry , double graphics , double english , double human_rights);
double calc_the_GPA ();
void getting_mini_GPA_2 ();
void calc_the_GPA_2 ();


int main()
{
    int user_choise{};
 // cout << "how to difine function protoypes"  ;
   cout << " GPA CALCULATOR " << endl;
   cout << "=================" <<endl;
   cout << "Do You Want To Enter Your Grade Or GPA in Each Subject? " << endl;
   cout << "1. WITH Final GPA......................2.All GPA" << endl;
   cout << "insertion: " ;
   cin >> user_choise;
   if(user_choise == 1 )
   {
     cout << calc_the_GPA();
     cout << endl;

   }
   else if (user_choise == 2 )
   {
       getting_mini_GPA_2();

       cout << " Your GPA is : " ;
       calc_the_GPA_2() ;
       cout << endl;
   }
 }

                             //MY Functions
double calc_mini_GPA(double a)     //for the first function which return each subject GPA
{
if(a >= 97.0)
   return 4.0;
else if (a >=93.0)
    return 4.0;
else if(a >=89.0)
    return 3.70;
else if (a >=84.0)
    return 3.30;
else if (a >=80.0)
    return 3.0;
 else if (a >=76.0)
    return 2.7;
else if (a >=73.0)
    return 2.30;
else if (a >=70.0)
    return 2.0;
else if (a >=67.0)
    return 1.70;
else if (a >=64.0)
    return 1.3;
else if (a >=60.0)
    return 1.0;
else
   return 0.0;
}


void getting_mini_GPA () // Getting the The  degrees and calculate the GPA
{

 cout << "\n enter math degree: " ;
 cin >> maths;
  cout << "\n enter mechanics degree: " ;
 cin >> mechanics;
   cout << "\n enter physics degree: " ;
 cin >> physics;
   cout << "\n enter chemistry degree: " ;
 cin >> chemistry;
   cout << "\n enter graphics degree: " ;
 cin >> graphics;
   cout << "\n enter english degree: " ;
 cin >> english;
   cout << "\n enter human_rights degree: " ;
 cin >> human_rights;

  maths_gpa = calc_mini_GPA(maths);
  mechanics_gpa = calc_mini_GPA(mechanics);
  physics_gpa = calc_mini_GPA(physics);
  chemistry_gpa = calc_mini_GPA(chemistry);
  graphics_gpa = calc_mini_GPA(graphics);
  english_gpa = calc_mini_GPA(english);
  human_rights_gpa = calc_mini_GPA(human_rights);

}

double calc_the_GPA ()
{
  getting_mini_GPA ();
  cout << "your GPA is : ";
  return (((maths_gpa*maths_hour)+(mechanics_gpa*mechanics_hour)+(physics_gpa*physics_hour)+(chemistry_gpa*chemistry_hour)+(graphics_gpa*graphics_hour)+(english_hour*english_gpa)+(human_rights_gpa*human_rights_hour))/(maths_hour+mechanics_hour+physics_hour+mechanics_hour+graphics_hour+english_hour+human_rights_hour));

}

void getting_mini_GPA_2 ()
{

 cout << "\n enter math degree: " ;
 cin >> maths_2;
  cout << "\n enter mechanics degree: " ;
 cin >> mechanics_2;
   cout << "\n enter physics degree: " ;
 cin >> physics_2;
   cout << "\n enter chemistry degree: " ;
 cin >> chemistry_2;
   cout << "\n enter graphics degree: " ;
 cin >> graphics_2;
   cout << "\n enter english degree: " ;
 cin >> english_2;
   cout << "\n enter human_rights degree: " ;
 cin >> human_rights_2;


}

void calc_the_GPA_2 ()
{

 //getting_mini_GPA_2();
cout<<  (((maths_2*maths_hour)+(mechanics_2*mechanics_hour)+(physics_2*physics_hour)+(chemistry_2*chemistry_hour)+(graphics_2*graphics_hour)+(english_hour*english_2)+(human_rights_2*human_rights_hour))/(18.0));

}
 
