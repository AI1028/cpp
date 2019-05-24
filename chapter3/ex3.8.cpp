#include <iostream>

using namespace std;

int main()
{
    string str("hello");
    
    /*
    for (char s : str)
        s = 'X';
    */
    decltype(str.size()) cnt = 0;
    while (cnt < str.size())
    {
        str[cnt] = 'X';
        cnt++;
    }
    cout << str << endl;

    return 0;
}
