#include <iostream>

using namespace std;

int main()
{
    string str("hello");
    
    for (auto &s : str)
        s = 'X';
    cout << str << endl;

    return 0;
}
