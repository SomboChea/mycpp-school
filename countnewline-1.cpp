// Keyboard keys \ |
#include <iostream>
#include <string>
#include <vector>
using std::cout; using std::endl; using std::cin;
using std::string; using std::vector;

int main()
{
    string ch; // getting input
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, blankCnt = 0, tabCnt = 0, newlineCnt = 0; // counters
    cout << "Type in letters, once finished press CTRL+D/Z (UNIX/WINDOWS)" << endl; // instructions

    while (getline(cin, ch))
    {
        for (auto c : ch)
        {
            // if its a vowel, increment the appropriate counter
            switch (c)
            {
                case 'a':
                    ++aCnt;
                    break;
                case 'e':
                    ++eCnt;
                    break;
                case 'i':
                    ++iCnt;
                    break;
                case 'o':
                    ++oCnt;
                    break;
                case 'u':
                    ++uCnt;
                    break;
                // Capitals
                case 'A':
                    ++aCnt;
                    break;
                case 'E':
                    ++eCnt;
                    break;
                case 'I':
                    ++iCnt;
                    break;
                case 'O':
                    ++oCnt;
                    break;
                case 'U':
                    ++uCnt;
                    break;

                case ' ':
                    ++blankCnt;
                    break;
                case '\t':
                    ++tabCnt;
                    break;
                case '\n':
                    ++newlineCnt;
                    break;
            }
        }
    }

    cout << "Number if vowel a: \t" << aCnt << '\n'
            << "Number of vowel e: \t" << eCnt << '\n'
            << "Number of vowel i: \t" << iCnt << '\n'
            << "Number of vowel o: \t" << oCnt << '\n'
            << "Number of vowel u: \t" << uCnt << '\n'
            << "Number of spaces: \t" << blankCnt << '\n'
            << "Number of tabs: \t" << tabCnt << '\n'
            << "Number of newlines \t" << newlineCnt << endl;
    return 0;
}
