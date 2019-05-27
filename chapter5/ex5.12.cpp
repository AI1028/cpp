#include <iostream>
using namespace std;

int main()
{   
    char in, pre = '\0';
    int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0, space_cnt = 0, tab_cnt = 0, new_line_cnt = 0, ff_cnt = 0, fl_cnt = 0, fi_cnt = 0;
    while (cin >> noskipws >> in && in != 'Q')
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
                if (pre == 'f')
                    fi_cnt += 1;
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
            case ' ':
                space_cnt += 1;
                break;
            case '\n':
                tab_cnt += 1;
                break;
            case '\t':
                new_line_cnt += 1;
                break;
            case 'f':
                if (pre == 'f')
                {
                    ff_cnt += 1;
                }
                break;
            case 'l':
                if (pre == 'f')
                {
                    fl_cnt += 1;
                }
                break;
            default:
                break;
        }
        pre = in;
    }
    cout << a_cnt << " " << e_cnt << " " << i_cnt << " " << o_cnt << " " << u_cnt << " "<< space_cnt << " " << tab_cnt << " " << new_line_cnt << " " << ff_cnt << " "<< fl_cnt << " " << fi_cnt << endl;

    return 0;
}