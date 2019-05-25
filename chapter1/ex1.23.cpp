#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item item, itemTmp;
    int cnt = 1;
    cin >> item;
    while (cin >> itemTmp)
    {
        if (itemTmp.isbn() == item.isbn())
            cnt++;
        else
        {
            cout << "The quantity of book " << item.isbn() << " is " << cnt << "." << endl;
            cnt = 1;
            item = itemTmp;
        }
    }
    cout << "The quantity of book " << item.isbn() << " is " << cnt << "." << endl;

    return 0;
}
