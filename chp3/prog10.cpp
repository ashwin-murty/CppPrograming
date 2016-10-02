#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string replaceAll (string str, char c1, char c2)
{
  for (int i = 0; i < str.length(); i++)
  {
    if (str [i] == c1) str[i] = c2;
  }
  return str;
}
int main ()
{
    assert (replaceAll (string("foobar"), 'o', 'l') == string("fllbar"));
  return 0;
}
