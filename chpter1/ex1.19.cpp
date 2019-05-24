#include <iostream>

using namespace std;

int main()  // ./ex1.19 <infile >outfileb (redirection)
{
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    for (int i = num1; i <= num2; i++)
        cout << i << endl;

    return 0;
}
