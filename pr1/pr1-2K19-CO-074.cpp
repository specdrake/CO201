#include <iostream>
using namespace std;
int main()
{

  int** ary = new int*[100];
  int N;
  cout<<"enter number of students "<<endl;
  cin>>N;
  for(int i = 0; i < N; ++i)
      ary[i] = new int[5];


  for(int i = 0; i < N; ++i)
   {
       cout<<endl<<"enter marks for student "<<i+1<<endl<<endl;
    int marks;
    for(int j = 0; j < 5; ++j)
     {  cout<<"enter marks in subject "<<j+1<<" : "<<endl;
         cin>>marks;
        ary[i][j] = marks;
     }

   }

   for(int i = 0; i < N; ++i)
   {
       int sum =0;
        cout<<"total marks of student "<<i+1<<" : ";
    for(int j = 0; j < 5; ++j)
    {
      sum = sum + ary[i][j];
    }
    cout<<sum<<endl;
    }


  for(int j = 0; j < 5; ++j)
  { int sum =0;
      cout<<"average of subject "<<j+1<<" : ";
    for(int i = 0; i < N; ++i)
     {
       sum = sum + ary[i][j];
     }
     cout<<sum/N<<endl;
  }


  //for(int i = 0; i < N; ++i)
   // for(int j = 0; j < 5; ++j)
     // cout << ary[i][j] << "\n";


  for(int i = 0; i < N; ++i)
    delete [] ary[i];
  delete [] ary;

  return 0;
}
