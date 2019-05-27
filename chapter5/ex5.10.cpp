#include <iostream>
using namespace std;

int main()
{   
    char in;
    int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0;
    while (cin >> in && in != 'Q')
    {
        switch (in)
        {
            case 'a':
            case 'A':
                a_cnt += 1;
                break;
            case 'e':
            case 'E':
                e_cnt += 1;
                break;
            case 'i':
            case 'I':
                i_cnt += 1;
                break;
            case 'o':
            case 'O':
                o_cnt += 1;
                break;
            case 'u':
            case 'U':
                u_cnt += 1;
                break;
            default:
                break;
        }
    }
    cout << a_cnt << " " << e_cnt << " " << i_cnt << " " << o_cnt << " " << u_cnt << endl;

    return 0;
}