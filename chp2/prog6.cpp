#include <iostream>
using namespace std;

bool isPrime (int n)
{
  int i = 2;
  for (; i <= n; i++)
  {
    if (n % i == 0 && i < n)
    {
      return false;
    }
    else return true;
  }
  return false;
}
int main()
{
  int number = 2;
  for (; number <= 101; number++)
  {
    bool n = isPrime (number);
    if (n == true)
    {
      cout << number << " ";
    }
  }
  return 0;
}

