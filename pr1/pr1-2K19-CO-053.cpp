#include <iostream>
using namespace std;
int main(){
    int i,j = 5; //i = no of student in class and j = no of subject
    cout<<"Enter no. of student in class: ";
    cin>>i;
    int p[i][j];
    //input marks of student i
    for (int a = 1; a<=i; a++){
        //input the marks  of subject j
        for (int b = 1; b<=j; b++){
            cout<<"Enter the marks of student "<<a<<" of subject "<<b<<" : ";
            cin>>p[a][b];
        }
    }
    cout<<"\n\nThe average and total marks for each subject"<<endl;
     for (int b = 1; b<=j; b++){
            int sum = 0;
        for (int a = 1; a<=i; a++){
            sum = sum + p[a][b];
        }
     cout<<"The sum of subject "<<b<<" is "<<sum<<endl;
     cout<<"The average of subject "<<b <<" is "<<(sum/i)<<endl;
     }

     cout<<"\n\nThe average and sum of each student"<<endl;
     for (int a = 1; a<=i; a++){
         int sum = 0;
         for (int b = 1; b<=j; b++){
        sum = sum + p[a][b];
     }
     cout<<"The sum of marks of student "<<a<< " is " <<sum<<endl;
     cout<<"The average of marks of student "<<a<<" is "<<(sum/j)<<endl;
     }
return 0;
}
