#include <iostream>

using namespace std;

int main()
{
    string str("hello");
    
    for (char s : str)
        s = 'X';
    cout << str << endl;

    return 0;
}
