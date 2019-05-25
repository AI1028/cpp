#include <iostream>
#include <string>

using namespace std;

int main()
{
    char n;
    while (cin >> n)
    {
        switch (n)
        {
            case 'a':
                cout << 1 << endl;
                break;
            case 'b':
                cout << 2 << endl;
                break;
            default:
                cout << -1 << endl;
                break;
        }
    }

    return 0;
}
