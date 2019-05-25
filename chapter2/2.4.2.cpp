#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    const int *c = &a;
    cout << *c << endl;
    c = &b;  // reassign
    cout << *c << endl; 
    

    return 0;
}
