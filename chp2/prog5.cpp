#include <iostream>
using namespace std;


bool isPerfect (int n)
{
  int i = 1;
  int sum = 0;
  while (i < n)
  {
    if (n % i == 0)
    {
      sum = sum + i;
    }
    i++;
  }
  if (sum == n)
  {
    cout << n << endl;
    return true;
  }
  else return false;
}
int main()
{
  int i = 0;
  for (;i < 10000; i++)
  {
    isPerfect (i);
  }
  return 0;
}
