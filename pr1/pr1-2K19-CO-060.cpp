#include <stdio.h>

int main()
{
    int n;
    // take total no. of students in class from user
    printf("Enter total no. of students in class.:- ");
    scanf("%d", &n);

    int marks_list[n][5], student_total_marks[n] = {0}, class_subject_total[5] = {0};

    for (int i = 0; i < n; i++)
    {
        printf("Enter marks of % dth student in DS(1st), M&S(2nd), OOP(3th), EC(4th), discrete(5th) respectively :\n", i + 1);

        // take input from the user
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &marks_list[i][j]);

            // Add student marks
            student_total_marks[i] += marks_list[i][j];

            // add subject marks
            class_subject_total[j] += marks_list[i][j];
        }
    }

    printf("\n");

    // print total marks of each student
    printf("Students total and avg. marks :\n");

    for (int i = 0; i < n; i++)
    {
        printf("Total marks of %dth student => %d\n", i + 1, student_total_marks[i]);
        printf("Average marks of %dth student => %.2f\n\n", i + 1, ((float)student_total_marks[i]) / 5.0);
    }

    printf("\n\n");

    // print total marks of each subject
    printf("Subjectwise Avg. marks of class :\n");

    for (int j = 0; j < 5; j++)
    {
        printf("Class Average marks in %dth subject => %.2f\n", j + 1, ((float)class_subject_total[j]) / (float)n);
    }
}