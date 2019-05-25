#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[3][4] = {0};
    
    for (auto &item1 : a)
    {
        for (int item2 : item1)
            cout << item2 << " ";
        cout << endl; 
    }

    cout << endl;

    return 0;
}
