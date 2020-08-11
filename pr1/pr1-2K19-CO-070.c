/* Author : Anurag Hooda (2K19/CO/070)
 * Program 1
 * 2D array totals and averages
 */
#include <stdio.h>
#define MAX_STDS 100
#define NO_SUBJ 5
typedef struct {
  float stdavg;
  int stdtot;
} Stdres;
int main(void)
{
  int marks[MAX_STDS][NO_SUBJ];
  int stds_added = 0;
  double subavg[NO_SUBJ];
  Stdres stdresarr[MAX_STDS]; 
  int current_max;
  // Input
  printf("Enter the no. of students : ");
  scanf("%d", &current_max);
  if(current_max > MAX_STDS)
  {
    printf("\nMaximum no. of students is %d\n", MAX_STDS);
    return 1;
  }
  for(int i = 0; i < current_max; i++)
  {
    printf("Entering marks for student no. %d : \n", i + 1);
    for(int j = 0; j < NO_SUBJ; j++)
    {
      printf("Enter marks for subject %d : ", j + 1);
      scanf("%d", &marks[i][j]); 
    }
    stds_added++;
  }
  Stdres tempstdres;
  // Calculations
  for(int i = 0; i < stds_added; i++)
  {
    tempstdres.stdtot = 0;
    tempstdres.stdavg = 0;
    // For every student
    for(int j = 0; j < NO_SUBJ; j++)
    {
      tempstdres.stdtot += marks[i][j];
      subavg[j] += marks[i][j];
    }
    tempstdres.stdavg = (double) tempstdres.stdtot / NO_SUBJ;
    stdresarr[i] = tempstdres;
  }
  //Output
  //Subject averages
  for(int i = 0; i < NO_SUBJ; i++)
  {
    printf("Subject %d class average : %.2f\n", i+1, subavg[i]/stds_added);
  }
  // Student totals and averages
  for(int i = 0; i < stds_added; i++)
  {
    printf("Student %d : Total = %d, Average = %.2f\n", i + 1, stdresarr[i].stdtot, stdresarr[i].stdavg); 
  }
  
  return 0;
}
