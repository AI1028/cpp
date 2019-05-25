#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    vector<int> vec(10, 9);

    int arr[10] = {0};

    for (int i = 0; i < 10; i++)
        arr[i] = vec[i];

    for (auto item : arr)
        cout << item << " ";

    cout << endl;



    return 0;
}
