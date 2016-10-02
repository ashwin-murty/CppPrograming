#include <iostream>
#include <string>
#include <locale>
using namespace std;

void trim (std::string& stf, const std::locale& loc = std::locale());
void ltrim (std::string& str, const std::locale& loc = std::locale());
void rtrim(std::string& str, const std::locale& loc = std::locale());

int main ()
{
  string stra;
  cout << "Enter a sentence.";
  getline (cin, stra);
  trim (stra);
  cout << "Trimmed string: |" << stra << "|" << endl;
  return 0;
}
void ltrim(string& str, const locale& loc) {
  string::size_type pos = 0;
  while (pos < str.size() && isspace (str[pos], loc)) pos++;
  str.erase (0, pos);
}
void rtrim (string& str, const locale& loc) {
  string::size_type pos = str.size();
  while (pos > 0 && isspace(str[pos-1], loc)) pos--;
  str.erase(pos);
}

void trim (string& str, const locale &loc) {
  ltrim (str, loc);
  rtrim(str, loc);
}
