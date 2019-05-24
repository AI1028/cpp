#include <iostream>

using namespace std;

int main()
{
    string words, word;
    while (cin >> word)
        words += word + " ";
    cout << words << endl;


    return 0;
}
