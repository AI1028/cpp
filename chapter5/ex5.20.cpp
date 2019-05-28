#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string word, preWord;

    do {
        preWord = word;
    }while (cin >> word && word != preWord);  // don't forget the ';'.
    if (word == preWord)
        cout << "the repeat word is: " << word << endl;
    else 
        cout << "no repeat word." << endl;

    return 0;
}