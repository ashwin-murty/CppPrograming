#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter a number to be factorized: " << endl;
  cin >> number;

  bool printed = false;

  for (int i = 2;number > 1 ;i++)
  {
    while (number % i == 0)
    {
        if (printed) cout << "*";
        cout << i;
        printed = true;

        number = number/i;
    }
  }
  cout << endl;
  return 0;
}
  

