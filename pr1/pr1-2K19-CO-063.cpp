#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter no. of Students ";
    int n;
    cin >>n;

    long m[n+1][10];
    cout<<"Enter Details subject wise \n";

    double p,q,r,s,t;
    p=0;
    q=0;
    r=0;
    s=0;
    t=0;

    for(int i=0;i<n;i++){
        double sum = 0;
        for(int j=0;j<5;j++){
            cin>>m[i][j];
            sum =sum + m[i][j];
            if(j==0) p=p+m[i][j];

            if(j==1) q=q+m[i][j];

            if(j==2) r=r+m[i][j];

            if(j==3) s=s+m[i][j];

            if(j==4) t=t+m[i][j];
        }
        m[i][5]=sum;
        m[i][6]=double(sum)/5;
    }
    cout<<endl<<"Details of subject \n";

    m[n][0]=p;
    m[n][1]=q;
    m[n][2]=r;
    m[n][3]=s;
    m[n][4]=t;

    for(int i=0;i<5;i++){
        cout<<setw(3)<<(char)(i+'A');
    }
    cout<<" Total  Average";
    cout<<endl<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            cout<<setw(3)<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Total marks of subject\n";
    for(int j=0;j<5;j++){
        cout<<setw(3)<<m[n][j]<<" ";
    }
    cout<<endl;


    return 0;
}
