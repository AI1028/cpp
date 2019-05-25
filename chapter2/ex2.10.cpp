#include <iostream>

using namespace std;

int global_int;
string global_str;

int main()
{
    int local_int;
    string local_str;
    cout << "global_int:" << global_int << "||global_str:" << global_str << "||local_int:" << local_int << "||local_str:" << local_str << endl;
    cout << global_str.length() << local_str.length() << endl;

    return 0;
}
