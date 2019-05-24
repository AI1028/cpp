#include <iostream>

using namespace std;

int main()
{
    int a = 0, *p = &a, *q = p;
    // int a = 0, *p = &a, *&q = p;  // line 1 and 2 is different.

    cout << *p << endl << *q << endl;
    
    int b = 1;
    p = &b;

    cout << *p << endl << *q << endl;

    return 0;
}
