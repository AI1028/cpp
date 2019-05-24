#include <iostream>
#include <cstring>
#include <iterator>
using namespace std;

int main()
{
    char str1[] = "hello ";
    char str2[] = "c++.";
    char str3[10];

    strcpy(str3, str1);
    strcat(str3, str2);

    auto b = begin(str3), e = end(str3);

    while (b != e)
    {
        cout << *b;
    
        b++;
    }
    cout << endl;

    return 0;
}
