#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 2;
    int *p = &a, *q = &b;
    // p = q;
    *p = b;
    cout << a << endl << p << endl << *p << endl;


    return 0;
}
