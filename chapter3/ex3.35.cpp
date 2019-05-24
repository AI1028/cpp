#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {0, 2, 0, 1, 0, 9, 8, 0, 7, 0};

    auto b = begin(arr), e = end(arr);
    while (b != e)
    {
        *b = 0;
        b++;
    }

    for (auto p = begin(arr); p != end(arr); p++)
        cout << *p << " ";
    cout << endl;
    
    /*
    for (auto item : arr)
        cout << item << " ";
    cout << endl;
    */

    return 0;
}
