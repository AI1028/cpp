#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int &hi = a;
    int &b = hi;
    cout << hi << b << endl;


    return 0;
}
