#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter no. of Students --> ";
    int n;  cin >>n;

    double matrix[n+1][7];
    cout<<"Enter Details subjectWise\n\n";

    double a,b,c,d,e;
    a=b=c=d=e=0;

    for(int i=0;i<n;i++){
        double sum = 0;
        for(int j=0;j<5;j++){
            cin >>matrix[i][j];
            sum += matrix[i][j];
            if(j==0) a+=matrix[i][j];
            if(j==1) b+=matrix[i][j];
            if(j==2) c+=matrix[i][j];
            if(j==3) d+=matrix[i][j];
            if(j==4) e+=matrix[i][j];
        }
        matrix[i][5]=sum;
        matrix[i][6]=double(sum)/5;
    }
    cout<<endl<<"Subject Details\n\n";

    matrix[n][0]=a;  matrix[n][1]=b;
    matrix[n][2]=c;  matrix[n][3]=d;
    matrix[n][4]=e;

    for(int i=0;i<5;i++){
        cout<<setw(3)<<(char)(i+'A');
    }
    cout<<" Total  Average";
    cout<<endl<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            cout<<setw(3)<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Subject Total of class\n";
    for(int j=0;j<5;j++){
        cout<<setw(3)<<matrix[n][j]<<" ";
    }
    cout<<endl;


    return 0;
}
