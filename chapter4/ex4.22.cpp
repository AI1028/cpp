#include <iostream>

using namespace std;

int main()
{
    int grade = 65;

    string level = (grade > 90) ? "high pass"
                                : (grade > 60 && grade < 75) ? "low pass"
                                : (grade < 60) ? "fail" : "pass";
    cout << level << endl;

    return 0;
}
