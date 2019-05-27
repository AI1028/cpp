 #include <iostream>
 #include <vector>
 using namespace std;

 int main()
 {
    vector<int> v;
    int i = 0;

    while (cin >> i)
        v.push_back(i);
    auto beg = v.begin();
    while (beg != v.end() && *beg >= 0)
        ++beg;
    if (beg == v.end())
        cout << "each member of v >= 0." << endl;
    else
    {
        cout << "not each member of v >= 0." << endl;
        cout << *beg << " < 0." << endl;
    }

    return 0;     
 }