#include <iostream>

using namespace std;

int main()
{
    short *p;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(short) << endl;

    return 0;
}
