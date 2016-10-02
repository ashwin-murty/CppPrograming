#include <iostream>
using namespace std;
#include <cassert>
#include <cmath>

double Sqrt(double x)
{
  double g = x/2;
  while ((g + x/g)/2 != g && (g + x/g)/2 != x/g)
  {  
    g = (g + x/g)/2;
  }
  return g;
}
int main()
{
  assert (fabs(Sqrt (4) - 2.0) < 0.1);
  assert (fabs(Sqrt (9) - 3.0) < 0.1);
  return 0;
}
