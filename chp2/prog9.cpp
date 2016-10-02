#include <iostream>
using namespace std;
#include <cassert>
using namespace std;

int permutations(int n, int k)
{
  int result = 1;
  k = n-k;
  for (; n > k; n--)
  {
    result = result * n;
  }
  return result;
}
int main()
{
  assert (permutations (52, 2) == 2652);
  assert (permutations (52, 10) == 22);
  return 0;
}
