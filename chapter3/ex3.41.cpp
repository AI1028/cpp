#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[3] = {1, 2, 3};

    vector<int> vec(begin(a), end(a));

    for (auto item : vec)
        cout << item << " ";
    cout << endl;


    return 0;
}
