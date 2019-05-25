#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    vector<int> vec{1, 2, 3};

    for (auto item : vec)
        cout << ((item % 2 != 0) ? item * 2 : 0) << endl;


    return 0;
}
