#include <iostream>

using namespace std;

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    // r2 = 3.14159;
    // r2 = r1;
    // r2 = r2;
    r1 = d;
    cout << i << endl << r1 << endl << d << endl << r2 << endl;

    return 0;
}
