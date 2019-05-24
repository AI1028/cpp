#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    vector<int> nums;
    while (cin >> num)
        nums.push_back(num);
    for (decltype(nums.size()) i = 0; i < nums.size() / 2; i++)
    {
        // cout << nums[i] + nums[i + 1] << endl;
        cout << nums[i] + nums[nums.size() - 1 - i] << endl;
        // cout << "size: " << nums.size() << " i: " << i << endl;
    }
    return 0;
}
