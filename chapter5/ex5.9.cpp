#include <iostream>
using namespace std;

int main()
{
    char in;
    int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0;
    while (cin >> in)
    {
        if (in == 'a')
        {
            a_cnt += 1;
        }
        else if (in == 'e')
        {
            e_cnt += 1;
        }
        else if (in == 'i')
        {
            i_cnt += 1;
        }
        else if (in == 'o')
        {
            o_cnt += 1;
        }
        else if (in == 'u')
        {
            u_cnt += 1;
        }
        else if (in == 'Q')
        {
            break;
        }
        else
        {
            ;
        }
    }
    cout << a_cnt << " " << e_cnt << " " << i_cnt << " " << o_cnt << " " << u_cnt << endl;

    return 0;
}