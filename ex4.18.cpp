#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -2};    
    
    auto beg = vec.begin(), end = vec.end();
    while (beg != end && *beg >= 0)
        // cout << *beg++ << endl;
        cout << *++beg << endl;


    return 0;
}
