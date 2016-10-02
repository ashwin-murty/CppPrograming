#include <iostream>
using namespace std;
#include "random.h"

int flipCoin (void);

int main()
{
  int numberOfFlips = 0;
  int numberOfHeads = 0;
  int coin;
  for (; numberOfHeads < 3; numberOfFlips++)
  {
    coin = flipCoin();
    if (coin == 1) numberOfHeads++;
    else numberOfHeads = 0;
  }
  cout << "It took " << numberOfFlips << " flips to get 3 consecutive heads." << endl;
  return 0;
}

int flipCoin()
{
  if (randomChance (0.50))
  {
    return 1;
  }
  else return 2;
}
