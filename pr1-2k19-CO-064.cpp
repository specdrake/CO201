#include <iostream>

using namespace std;

int main()
{
    int students_marks[101][5], student_count;
    char sub[][7] = {"Phy", "Chem", "Maths", "Eng", "Hin"};

    cout << "Enter number of students (Max 100): ";
    cin >> student_count;
    cout << "Enter the marks of students: " << endl;

    for (int i = 0; i < student_count; i++)
    {
        cout << "Marks of roll number: " << i + 1 << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << ' ' << sub[j] << ": ";
            cin >> students_marks[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < student_count; i++)
    {
        int total_student = 0;
        cout << "Roll number " << i + 1 << ", "
             << "Total = ";

        for (int j = 0; j < 5; total_student += students_marks[i][j++])
            ;
        cout << " " << total_student;

        cout << ", Average = " << (float)total_student / 5;

        cout << " [ ";
        for (int k = 0; k < 5; k++)
            cout << sub[k] << ": " << students_marks[i][k] << " ";
        cout << "]" << endl;
    }

    int class_total = 0;
    cout << endl;

    for (int i = 0; i < student_count; class_total += students_marks[i++][0])
        ;
    cout << "Class Average: " << sub[0] << ": " << (float)class_total / student_count << ", ";
    class_total = 0;

    for (int i = 0; i < student_count; class_total += students_marks[i++][1])
        ;
    cout << sub[1] << ": " << (float)class_total / student_count << ", ";
    class_total = 0;

    for (int i = 0; i < student_count; class_total += students_marks[i++][2])
        ;
    cout << sub[2] << ": " << (float)class_total / student_count << ", ";
    class_total = 0;

    for (int i = 0; i < student_count; class_total += students_marks[i++][3])
        ;
    cout << sub[3] << ": " << (float)class_total / student_count << ", ";
    class_total = 0;

    for (int i = 0; i < student_count; class_total += students_marks[i++][4])
        ;
    cout << sub[4] << ": " << (float)class_total / student_count << " ";
    class_total = 0;

    return (0);
}