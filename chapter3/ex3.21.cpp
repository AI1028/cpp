#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);

    vector<vector<string>> w;
    w.push_back(v6);
    w.push_back(v7);

    for (auto item : v)
    {
        cout << "size: " << item.size() << ",  ";
        auto b = item.begin();
        auto e = item.end();
        while (b != e)
        {
            cout << *b << " ";
            b++;
        }
        cout << endl;
    }

    cout << endl;

    for (auto item : w)
    {
        cout << "size: " << item.size() << ",  ";
        auto b = item.begin();
        auto e = item.end();
        while (b != e)
        {
            cout << *b << " ";
            b++;
        }
        cout << endl;
    }

    return 0;
}
