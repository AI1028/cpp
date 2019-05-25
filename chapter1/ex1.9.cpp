#include <iostream>

using namespace std;

int main()
{
    int var = 50, sum = 0;

    for (int i = 0; i < 51; i++)
    {
        sum += var;
        var++;
    }
    cout << "sum = " << sum << endl;

    return 0;
}
