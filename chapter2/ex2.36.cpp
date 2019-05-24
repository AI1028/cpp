#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 4;

    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;
    cout << a << b << c << d << endl; // a:4 b:4 c:4 d:4 

    return 0;
}
