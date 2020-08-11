/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h> 
#include<conio.h>
int main(){
    int arr[100][5];
    int i=0;
    int j=0;
    int sum=0,avg=0;
    for (i=0;i<100;i++){
        for (j=0;j<5;j++){ 
    printf ("enter the marks of the student");
    scanf ("%d",&arr[i][j]); 
    printf ("total sum of marks of individual student ")
    sum=sum+arr[i][j];
        
    } 
printf ("total of %d student = %d\n",i+1,sum);
avg=sum/5;
printf ("avg marks of %d student is %d",i+1,avg);
sum=0; 
    } 
return 0;
}
