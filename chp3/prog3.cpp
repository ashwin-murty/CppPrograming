#include <iostream>
#include <string>
using namespace std;

string substr (string str, int pos, int n)
{
  if (pos > str.length()) return "Error";
  if (n > str.length()) return str.substr (pos, str.length() - pos);
  return str.substr (pos, n);
}
int main ()
{
  string str;
  int pos, n;
  cout << "Enter a string: ";
  getline (cin, str);
  cout << "Enter a position to start: ";
  cin >> pos;
  cout << "Enter the number of characters to go from that position: ";
  cin >> n;
  string result = substr (str, pos, n);
  cout << result << endl;
  return 0;
}

