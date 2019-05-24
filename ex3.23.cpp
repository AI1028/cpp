#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto b= v.begin(), e = v.end();
    while (b != e)
    {
        *b *= 2;
        cout << *b << endl;
        b++;
    }
    
    return 0;
}
