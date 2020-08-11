#include <stdio.h>

int main()
{
    int ROLLNO;
    float sum;
    int SUBJECT;
    printf("enter no. of students");
    scanf("%d", &ROLLNO);
    printf("enter no. of subjects");
    scanf("%d", &SUBJECT);
  
  int marks[ROLLNO][SUBJECT];

  // Using nested loop to store values in a 2d array
  for (int i = 0; i < ROLLNO; ++i)
  {
    for (int j = 0; j < SUBJECT; ++j)
    {
      printf("Rollno %d, Subject %d: ", i + 1, j + 1);
      scanf("%d", &marks[i][j]);
    }
  }
  
    printf("\n");
    
    printf("Roll no\t Student Average\n\n");

    for(int i = 0; i < ROLLNO; i++ )
    {
        sum = 0;

        for(int j = 0; j < SUBJECT; j++)
        {
            sum += marks[i][j];
        }
        printf("Rollno %d, Avg = %f\n", i + 1, sum/SUBJECT);
    }
  
   printf("\n");
    
    printf("Roll no\t Subject Average\n\n");

    for(int j = 0; j < SUBJECT; j++ )
    {
        sum = 0;

        for(int i = 0; i < ROLLNO; i++)
        {
            sum += marks[i][j];
        }
        printf("Subject %d, Avg = %f\n", j + 1, sum/ROLLNO);
    }
  
  return 0;
}
