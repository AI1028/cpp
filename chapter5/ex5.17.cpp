#include <iostream>
#include <vector>
using namespace std;

bool isPrefix(vector<int> const& obj1, vector<int> const& obj2)
{
    if (obj1.size() > obj2.size())
        isPrefix(obj2, obj1);
    
    auto beg1 = obj1.begin(), beg2 = obj2.begin();
    while (beg1 != obj1.end())
    {
        if (*beg1 != *beg2)
            return false;
        beg1++;
        beg2++;
    }
    return true;
}

int main()
{
    vector<int> obj1 = {0, 1, 1, 3};
    vector<int> obj2 = {0, 1, 1, 2, 3, 5, 8};

    cout << (isPrefix(obj1, obj2) ? "yes" : "no") << endl;

    return 0;
}