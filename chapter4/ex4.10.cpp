#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    
    /*
    while (cin >> num)
    {   
        cout << num << endl;
        if (num  == 42)
            break;
    }
    */

    while ((cin >> num) && num != 42)
        cout << num << endl;

    return 0;
}
