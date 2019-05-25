#include <iostream>

using namespace std;

int main()
{
    int ival = 3.14;
    // int &rval1 = 3.14;
    // int &rval3;
    int &rval2 = ival;
    cout << ival << rval2 << endl;

    return 0;
}
