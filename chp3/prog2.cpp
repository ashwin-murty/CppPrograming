#include <iostream>
#include <string>
#include <cassert>
using namespace std;


bool endsWith (string str, string suffix) {
  if (str.length() < suffix.length()) return false;
  int n = str.length();
  int m = suffix.length();
  for (int i = 0; i < suffix.length(); i++){
    if (str[n-m+i] != suffix[i]) return false;
  }
  return true;
}
int main ()
{ 

    assert (endsWith ("I eat", "ea")  == 0);
    assert (endsWith ("I eat", "eat") == 1);

    assert (endsWith ("abc", "abcd") == 0);
    return 0;
}
