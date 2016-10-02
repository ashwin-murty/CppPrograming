#include <iostream>
using namespace std;
#include <fstream>
using namespace std;

int main ()
{
    int wordCount, charCount, lineCount;
    wordCount = 0;
    charCount = 0;
    lineCount = 0;
    cout << "Enter a text: " << endl;
    while (true)
    {
        char n = getchar();
        if (n == EOF) {
                cout << "Number of characters: " << charCount << endl;
                cout << "Number of words: " << wordCount << endl;
                cout << "Number of lines :" << lineCount << endl;
                return 0;
            }
        charCount++;
        if (isspace (n)){
            wordCount++;
            if (n == '\n') lineCount++;
        }
   }
}

