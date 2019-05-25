#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string str1("hello");
    string str2("hi");

    if (str1 > str2)
        cout << "str1 > str2" << endl;
    else if (str1 == str2)
        cout << "str1 = str2" << endl;
    else
        cout << "str1 < str2" << endl;
    
    
    char str3[] = "hello";
    char str4[] = "hi";

    if (strcmp(str3, str4) > 0)
        cout << "str3 > str4" << endl;
    else if (strcmp(str3, str4) == 0)
        cout << "str3 = str4" << endl;
    else
        cout << "str3 < str4" << endl;

    return 0;
}
