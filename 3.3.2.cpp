#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 100; i++)
        v.push_back(i);
    for (auto item : v)
        cout << item << endl;

    return 0;
}
