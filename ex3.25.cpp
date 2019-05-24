#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    auto b = scores.begin();
    while (cin >> grade)
    {
        if (grade <= 100)
            *(b + grade / 10) += 1;
            //*(b + grade / 10)++;  // wrong, why? because the priority of '++' is higher than '*'.
    }
    
    auto bb = scores.begin();
    auto ee = scores.end();
    while (bb != ee)
    {
        cout << *bb << " ";
        bb++;
    }
    cout << endl;
    

    return 0;
}
