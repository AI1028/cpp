#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> str{"hello", "c", "++"};

    vector<string>::iterator iter = str.begin();

    // cout << *iter++ << endl;
    // cout << (*iter)++ << endl;
    // cout << (*iter).empty() << endl;
    // cout << iter->empty() << endl;
    // cout << ++*iter() << endl;
    cout << iter++->empty() << endl;

    return 0;
}
