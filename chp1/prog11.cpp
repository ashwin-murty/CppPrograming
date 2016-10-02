#include <iostream>
using namespace std;

int main ()
{
  double result = 0;
  double n = 1;
  for (int i = 0; i<10000; i++)
  {
    if (i % 2 == 0)
    {
      result = result + n;
    }
    if (i % 2 != 0)
    {
      result = result - n;
    }
    n = 1/n;
    n = 1/(n + 2);
  }
  result = result*4;
  cout << "The approximation of pi =" << result << endl;
  return 0;
}
