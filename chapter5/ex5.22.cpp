#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int sz;
    cin >> sz;
    while (sz <= 0)
    {
        cin >> sz;
    }
    cout << sz << " > 0" << endl;

    return 0;
}