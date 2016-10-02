#include <iostream>
#include <string>
using namespace std;
#include <cctype>
#include <cassert>

bool isSentencePalindrome (string str)
{
  int n = str.length();
  for (int i = 0; i < n; i++)
  {
    if (isalpha (str[i]) == false)
    {
      str.erase (i, 1);
      n--;
    }
  }
  cout << str << endl;
  for (int i = 0; i < n; i++)
  {
    str[i] = tolower (str[i]);
  }
  for (int i = 0; i < n/2; i++) {
    if (str[i] != str[n - i -1]) return false;
  }
  return true;
}

int main ()
{
    assert (isSentencePalindrome ("MadamImAdam"));
    assert (isSentencePalindrome ("Madam I'm Adam"));
    assert (!isSentencePalindrome ("Madam I'm Adamx"));
    return 0;
}
