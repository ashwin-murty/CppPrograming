#include <iostream>
#include <string>
#include <cctype>
#include <cassert>
using namespace std;


bool isVowel (char ch)
{
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
  {
    return true;
  }
  return false;
}
string obenglobish (string str)
{
  int n = str.length();
  int j = 1;
  if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u') {
    str.insert (0, "ob");
    j = j+2;
  }
  cout << str << endl;
  for (int i = j; i < n; i++)
  {
    if (i == n-1 && str[i] == 'e') break;
    if (isVowel (str[i]) && !isVowel (str[i-1])) {
      str.insert (i ,"ob");
      i = i + 2;
      n = n +2;
    }
    cout << str << endl;
  }
  cout << str << endl;
  return str;
}
int main ()
{
    assert (obenglobish ("english") == "obenglobish");
    assert (obenglobish ("rot") == "robot");
    assert (obenglobish ("hobnob") == "hobobnobob");
    assert (obenglobish ("gooiest") == "gobooiest");
    return 0;
}
