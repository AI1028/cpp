#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    const string s = "Hello";
    
    for (auto &a : s)  // type of c id 'char'
        cout << typeid(a).name() << " " << a << endl;  // typeid(a).name() returns 'c' to represent "char".
    return 0;
}
