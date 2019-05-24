#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string tmp;
    vector<string> chars;
    while (cin >> tmp)
        chars.push_back(tmp);
    for (string item : chars)
        cout << item << endl;

    return 0;
}
