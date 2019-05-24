#include <iostream>

using namespace std;

int main()
{
    int v1 = 0, v2 = 0;
    cout << "Enter 2 numbers: " << endl;
    cin >> v1 >> v2;
    
    /*
    * cout << "the result of (" << v1 << " * " << v2 
    *      << ") is " << v1 * v2 << endl;
    */
    
    cout << "the result of (";
    cout << v1;
    cout << " * ";
    cout << v2;
    cout << ") is ";
    cout << v1 * v2;
    cout << endl;

    return 0;
}
