#include <iostream>

using namespace std;

int main()
{
    int num = 0;

    while (cin >> num)
    {
        if (num % 2)
            cout << "ji shu" << endl;
        else 
            cout << "ou shu" << endl;
        if (num == -1)
            break;
    }

    return 0;
}
