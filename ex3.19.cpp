#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1(10, 42);
    vector<int> vec2 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> vec3{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    for (int item : vec3)
        cout << item << endl;

    return 0;
}
