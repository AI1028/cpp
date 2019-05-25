#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> gradeLevel = {"F", "D", "C", "B", "A", "A++"};    
    
    int score;
    string grade;
   
    while (cin >> score)
    {
        if (score > 100 || score < 0)
        {   
            cout << "bad input" << endl;
            continue;
        }

        if (score < 60)
            grade = gradeLevel[0];
        else
        {
            grade = gradeLevel[(score - 50) / 10];
            if (score != 100)
            {
                int mod = score % 10;
                if (mod > 7)
                    grade += "+";
                else if (mod < 3)
                    grade += "-";
            }
        }
        cout << grade << endl;
    }

    return 0;
}
