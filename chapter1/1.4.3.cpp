#include <iostream>

using namespace std;

int main()
{
    int sum =0, value = 0;
    while (cin >> value)  // If the input type is not correct(not "int", such as 'a' or "1.2", by the way, the result of this two is not the same), the loop sill stop.
        sum += value;
    cout << sum << endl;

    return 0;
}
