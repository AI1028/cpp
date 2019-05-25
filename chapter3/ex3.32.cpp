#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ia(10, 0);    
    
    for (int i = 0; i < 10; i++)
        ia[i] = i;

    for (auto item : ia)
        cout << item << " ";
    cout << endl;

    return 0;
}
