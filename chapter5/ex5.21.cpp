#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string word = "\0", preWord = "\0";

    while (true)
    {
        while (cin >> word && word != preWord)
            preWord = word;

        /*
        do {
            preWord = word;
        }while (cin >> word && word != preWord);  // don't forget the ';'.
        */

        if (word == preWord)
            if (word[0] >= 'A' && word[0] <= 'Z')
            {    
                cout << "the repeat word is: " << word << endl;
                break;
            }
            else
                continue;
        else
        { 
            cout << "no repeat word." << endl;
            break;
        }
    }

    return 0;
}