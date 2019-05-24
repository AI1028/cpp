#include <iostream>

using namespace std;

int main()
{
    int x[10] = {1};
    int *p = x;
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    cout << *p << endl;

    return 0;
}
