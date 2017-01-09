// IEA November 96
// Program reads a filename from cin and counts the
// number of lines in that file and the number of words.
// A word is considered to only consist of letters of
// the alphabet, any other character is treated as a
// separator or terminator (including newline)
// The words are printed as they are input.

#include <iostream>
#include <fstream>
#include <ctype.h>

using namespace std;

int main()
{
  char c;
  char filename[20];
  int wordcount = 0;             // word count
  int linecount = 0;             // line count
  ifstream ins;
  cout << "Enter name of input file: ";
  cin >> filename;
  ins.open(filename);
  if (ins.fail())
    {
      cout << "Failure on opening " << filename
           << endl;
      return 1;
    }
  ins.get(c);
  while (!ins.eof())
    {
      while (!isalpha(c) && !ins.eof())
        {
          if (c == '\n') linecount++;
          ins.get(c);
        }
      if (!ins.eof())
        {
          while (isalpha(c) && !ins.eof())
            {
              cout << c;
              ins.get(c);
            }
          wordcount++;
          cout << endl;
         }
     }
  cout << endl << "The word count was "
       << wordcount
       << endl;
  cout << endl << "The line count was "
       << linecount
       << endl;
  ins.close();
  return 0;
}

