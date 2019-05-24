#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int ival = 1;
    int *ptr = &ival;
    vector<int> vec = {1, 2, 3};

    if (ptr != 0 && *ptr++)
        cout << "1" << endl;
    cout << *ptr << endl;

    if (ival++ && ival)
        cout << "2" << endl;

    cout << ival++ << endl;
    return 0;
}

