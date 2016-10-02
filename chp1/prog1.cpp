#include <iostream>
using namespace std;
#include <math.h>
using namespace std;


int main()
{
  int input;
  cout << "This program reverses a number." << endl;
  cout << "Type a number: "<< endl;
  cin >> input;
  int numDigits = 0;
  int result = 0;
  for (int n = 1; input/n != 0; n = n*10)
  {
    numDigits++;
  }
  cout << "Number of digits = " << numDigits << endl;
  for (int i = numDigits - 1; i > 0; i--)
  {
    int a = 1;
    result = result + (input % (int) pow (10, a));
    result = result * (int) pow (10.0, i);
    result = result / pow (10, a-1);
    a++;
    cout << "Intermediate result: " << result << endl;
  }
  cout << "The reversed integer is: " << result << endl;
  return 0;
}
