#include <iostream>
using namespace std;

int main ()
{
  int year;
  cout << "Enter a year: " << endl;
  cin >> year;
  cout << "JANUARY has 31 days.";
  if (year % 4 == 0)
  {
    cout << "FEBUARY has 39 days.";
