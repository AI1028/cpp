#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    vector<string> chars;
    string tmp;
    while (cin >> tmp)
        chars.push_back(tmp);
    for (string t1 : chars)
    {
        for (char &t2 : t1)
            t2 = toupper(t2);
        cout << t1 << endl;
    }

    return 0;
}
