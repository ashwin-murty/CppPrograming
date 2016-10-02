#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "type a number: " << endl;
  cin >> number;
  int a = 0;
  for (int i = number; i > 0; i = i/10)
  {
    if (i < 10){
      a = (a + (i % 10));
    }
    else a = (a + (i % 10)) * 10;
  }
  cout << "The reverse is: " << a << endl;
  return 0;
}


