#include <iostream>

using namespace std;

int main()
{
    string str1, str2;

    cin >> str1 >> str2;
    /*
    if (str1.length() == str2.length())
        cout << "equal" << endl;
    else if (str1.length() > str2.length())
        cout << str1.length() << endl;
    else
        cout << str2.length() << endl;
    */

    if (str1.size() == str2.size())
        cout << "equal" << endl;
    else if (str1.size() > str2.size())
        cout << str1.size() << endl;
    else
        cout << str2.size() << endl;

    return 0;
}
