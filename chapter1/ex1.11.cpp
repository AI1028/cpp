#include <iostream>

using namespace std;

int main()
{
    int var1, var2;
    cout << "Enter 2 nums." << endl;
    cin  >> var1 >> var2;
    while (var1 <= var2)
    {
        cout << var1 << endl;
        var1++;
    }

    return 0;
}
