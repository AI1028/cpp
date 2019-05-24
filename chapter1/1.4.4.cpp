#include <iostream>

using namespace std;

int main()
{
    int curVal = 0, var =0;
    if (cin >> curVal)
    {
        int cnt =1;
        while (cin >> var)
        {
            if (curVal == var)
                cnt++;
            else
            {
                cout << curVal << " occurs " << cnt << " times." << endl;
                curVal = var;
                cnt = 1;
            }
        }
        cout << curVal << " occurs " << cnt << " times." << endl;
    }

    return 0;
}
