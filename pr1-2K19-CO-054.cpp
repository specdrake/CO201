#include <iostream>
using namespace std;

int main()
{
   int arr[100][6];
  
   int n;
   cout<<"enter no. of students: ";
   cin>>n;
    int total[n]={0};
    float avgs[n]={0};
   for (int i=0;i<n;i++)
   {
    cout<<"enter roll number: ";
    cin>>arr[i][0];
   }
   for(int i=0;i<n;i++)
   for(int j=1;j<6;j++)
   {
       cout<<"enter marks of roll no. "<<arr[i][0]<<" :";
       cin>>arr[i][j];
   }
   
   for(int i=0;i<n;i++)
  {
       for(int j=1;j<6;j++)
      {
       total[i]+=arr[i][j];//total marks of each student
      }
    avgs[i]=(float)total[i]/5;//average marks of each student
  }
   float classavg[5]={0};
  int sum;
  for(int j=1;j<6;j++)
  {
     sum=0;
  for(int i=0;i<n;i++)
  {
      sum+=arr[i][j];
  }
  classavg[j-1]=(float)sum/n;
  }
  for(int i=0;i<n;i++)
  {
      cout<<"total of roll no. "<<arr[i][0]<<" is "<<total[i]<<"\n";
      cout<<"average of roll no. "<<arr[i][0]<<" is "<<avgs[i]<<"\n";
  }
  for(int i=0;i<5;i++)
  {
      cout<<"class average in subject "<<i+1<<" is "<<classavg[i]<<"\n";
  }
}

