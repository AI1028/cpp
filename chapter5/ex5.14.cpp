#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word, preWord, repeatWord;
    int times = 0, repeatTimes = 0;

    while (cin >> word)
    {
        if (times != 0 && preWord != word)
        {
            times = 1;
            preWord = word;
            continue;  // different from [break].
        }
        times += 1;
        preWord = word;
        if (times > repeatTimes)
        {
            repeatTimes = times;
            repeatWord = word;
        }
    }
    cout << "repeatTimes: " << repeatTimes << endl << "repeatWord: " << repeatWord << endl;
    
    return 0;
}