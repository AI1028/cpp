#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4};

    auto b1 = begin(arr1), e1 = end(arr1);
    auto b2 = begin(arr2), e2 = end(arr2);
    auto size1 = e1 - b1, size2 = e2 - b2;

    if (size1 != size2)
    {
        cout << "not equal." << endl;
        return -1;
    }
    
    while (size1)
    {
        if (arr1[size1 - 1] != arr2[size1 - 1])
        {
            cout << "not equal." << endl;
            return -1;
        }
        size1--;
    }
    cout << "equal." << endl;

    return 0;
}
