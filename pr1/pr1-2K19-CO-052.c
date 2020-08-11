#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
Void main()
{   int n;
printf("Enter the total no. of students ");
scanf("%d",&n);

int arr[n][5];
if(n>100 || n<0)
{
printf("Invalid Entry \n The maximum number of permissible entries is 100");
exit(0);
}
else
{
int i,j;
        for(i=0;i<n;i++)
        { printf("Enter marks of student %d in\n ",i+1);

for(j=0;j<5;j++)
{
switch(j)
{
case 0: printf(" Physics " );
break;
case 1: printf(" Chemistry " );
break;
case 2: printf(" Mathematics " );
break;
case 3: printf(" Electrical " );
break;
case 4: printf(" BME " );
break;
default: break;
}
scanf("%d",arr[i][j]);
}
}
int p=0,c=0,m=0,e=0,b=0;
for(i=0;i<n;i++)
{
printf("Student %d\n ",i+1);
printf("Physics %d\n",arr[i][0]);
printf("Chemistry %d\n",arr[i][1]);
printf("Mathematics %d\n",arr[i][2]);
printf("Electrical %d\n",arr[i][3]);
printf("BME %d\n",arr[i][4]);
int total=0;
for(j=0;j<5;j++)
{total+=arr[i][j];
}
printf("Total Marks = %d\n",total);
printf("Average Marks=%d",total/5);
p+=arr[i][0];
c+=arr[i][1];
m+=arr[i][2];
e+=arr[i][3];
b+=arr[i][4];
}
printf("Class Average Marks in \n");
printf("Physics=%f\n",float(p/n));
printf("Chemistry=%f\n",float(c/n));
printf("Mathematics=%f\n",float(m/n));
printf("Electrical=%f\n",float(e/n));
printf("BME=%f\n",float(b/n));
}
}
