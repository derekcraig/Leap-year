#include <iostream>
using namespace std;

int main() 
{
 int year;
 char answer;

 cout << "This program checks to see if a given year is a leap year.\n";
 do
 {
  cout << "Please enter a year: ";
  cin >> year;
  if(year >= 1000 && year <= 2999)
  {
   if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
   {
   cout << year << " is a leap year!\n";
   }
   else
   cout << year << " is not a leap year.\n";
  }
  else
  {
  cout << year << " is not a valid year!\n"
       << "Please enter a year between 1000 and 2999.\n";
  } 
  cout << "Do you want to try again?\n"
       << "Please answer with Y/N: ";
  
 }while(answer == 'y' || answer == 'Y');
return 0;
}