#include <iostream>
#include <cassert>
using namespace std;

int roundToNearestInt (float x)
{
  int i;
  if (x > 0.0) 
  {
    x = x + 0.5;
    i =  int (x);
  }
  else if (x == 0)
  {
    return x;
  }
  else {
    x = x - 0.5;
    i = int (x);
  }
  return i;
}
int main()
{
    assert (roundToNearestInt (6.4) == 6);
    assert (roundToNearestInt (6.6) == 7);
    assert (roundToNearestInt (6.0) == 6);
    return 0;
}
