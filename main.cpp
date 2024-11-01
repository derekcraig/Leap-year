// CS10A Introduction to Programming
// Description: This program prompts the user to enter a year to be
//              checked if it is a leap year or not.
// Date: 4/3/2023
// Programmer: Derek Craig

#include <iostream>
using namespace std;

int main() 
{
 int year = 0;    //Holds the year entered to be checked
 char answer;     //Used to ask if the user wants to run it again 

 cout << "This program checks to see if a given year is a leap year.\n";

 for(;;)
 {
  cout << "Please enter a year: ";
  cin >> year; //Entering a character here starts an indefinate loop
  if(year >= 1000 && year <= 2999) //Validate user input
  {
   if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
   {
    cout << year << " is a leap year!" << endl;
   }
   else
   cout << year << " is not a leap year." << endl;
   }
   else
   {
   cout << year << " is not a valid year!" << endl
        << "Please enter a year between 1000 and 2999." << endl;
   continue;
   } 
   cout << "Do you want to try again?" << endl
        << "Please answer with Y/N: ";
   cin >> answer;
   if(answer == 'n' || answer == 'N')
   break;
   }
 cout << "Thank you, have a good day!";
 return 0;
}
/*
This program checks to see if a given year is a leap year.
Please enter a year: 0
0 is not a valid year!
Please enter a year between 1000 and 2999.
Please enter a year: 1000
1000 is not a leap year.
Do you want to try again?
Please answer with Y/N: y
Please enter a year: 2000
2000 is a leap year!
Do you want to try again?
Please answer with Y/N: n
Thank you, have a good day!
*/