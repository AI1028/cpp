#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v; // vector<int> v(10); is wrong. because v has already owns 10 zeros before assignment.
    int tmp;
    while (cin >> tmp)
        v.push_back(tmp);
    auto b = v.begin();
    auto e = v.end();
    while (b != (e - 1))
    {
        cout << *b + *(b + 1) << "  ";
        // cout << *b << " ";
        b++;
    }
    cout << endl;

    auto bb = v.begin();
    auto ee = v.end() - 1;
    while (bb <= ee)
    {
        cout << *bb + *ee << "  ";
        bb++;
        ee--;
    }
    
    cout << endl;
    
    return 0;
}
