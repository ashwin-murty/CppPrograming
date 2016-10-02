#include "random.h"
#include <math.h>
#include <iostream>
using namespace std;

bool SimulateDarts (float a, float b);
int main ()
{
  float num = 0;
  float den = 0;
  float result;
  float x, y;
  for (int i = 0; i < 10000; i++)
  {
    x = randomReal (0,1);
    y = randomReal (0,1);
    if (SimulateDarts (x, y) == true){
      num++;
    }
    den++;
  }
  result = num/den;
  float pie = 4 * result;
  cout << result;
  cout << pie << endl;
  return 0;
}
bool SimulateDarts (float a, float b)
{
  float sum = powf (a, 2.0) + powf (b, 2.0);
  if (sum < 1)
    return true;
  else return false;
}
