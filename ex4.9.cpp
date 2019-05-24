#include <iostream>

using namespace std;

int main()
{
    const char *cp = "Hello World!";
    cout << cp << endl;
    if (cp)
        cout << "1" << endl;
    cout << *cp << endl;
    if (*cp)
        cout << "2" << endl;
    cout << (cp && *cp) << endl;
    if (cp && *cp)
        cout << "3" << endl;

    return 0;
}
