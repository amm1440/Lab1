#include <iostream>
using namespace std;

int main()
{
    float num_grades;
    cout << "How many grades do you have? Enter Amount: ";
    cin >> num_grades;
    float tlt_grades;

    for (int i=1; i < num_grades+1; i++)
    {
        float temp_grade;
        cout << "\nwhat is grade " << i << "?: ";
        cin >> temp_grade;
        tlt_grades = tlt_grades + temp_grade;
    } 
    float grade = tlt_grades/num_grades;

    cout << "Your number grade " << grade << " Your letter grade ";

    if (grade >=100.00)
    {
        cout << "A+\n";
    }
    else if (grade < 97.00 && grade >= 93.00)
    {
        cout << "A\n";
    }
    else if (grade < 93.00 && grade >= 90.00)
    {
        cout << "A-\n";
    }
    else if (grade < 90.00 && grade >= 86.00)
    {
        cout << "B+\n";
    }
    else if (grade < 86.00 && grade >= 83.00)
    {
        cout << "B\n";
    }
    else if (grade < 83.00 && grade >= 80.00)
    {
        cout << "B-\n";
    }
    else if (grade < 80.00 && grade >= 76.00)
    {
        cout << "C+\n";
    }
    else if (grade < 76.00 && grade >= 73.00)
    {
        cout << "C\n";
    }
    else if (grade < 73.00 && grade >= 70.00)
    {
        cout << "C-\n";
    }
    else if (grade < 70.00 && grade >= 66.00)
    {
        cout << "D+\n";
    }
    else if (grade < 66.00 && grade >= 63.00)
    {
        cout << "D\n";
    }
    else if (grade < 63.00 && grade >= 60.00)
    {
        cout << "D-\n";
    }
    else if (grade < 60.00)
    {
        cout << "F\n";
    }

    return 0;
}
