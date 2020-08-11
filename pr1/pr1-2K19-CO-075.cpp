#include<iostream>
using namespace std;
int main()
{
    int r,c=5;
    cin>>r;
    int **arr = new int*[r];
    for(int i=0 ;i <r ;i++)
    {
        arr[i] = new int[c];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0; j <c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sub1=0,sub2=0,sub3=0,sub4=0,sub5=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0 ;j<c;j++)
        {
            if(j==0)
            {
                sub1 += arr[i][j];
            }
            else if(j==1)
            {
                sub2 +=arr[i][j];
            }
            else if(j==2)
            {
                sub3 +=arr[i][j];
            }
             else if(j==3)
            {
                sub4 +=arr[i][j];
            }
             else if(j==4)
            {
                sub5 +=arr[i][j];
            }
        }
    }
    cout<<"Average of each subject"<<endl;
    cout<<"avg in sub1 ="<<(float)sub1/r<<" "<<"avg in sub2 ="<<(float)sub2/r<<" "<<"avg in sub3 ="<<(float)sub3/r<<" "
        <<"avg in sub4 ="<<(float)sub4/r<<" "<<"avg in sub5 ="<<(float)sub5/r<<" "<<endl;
        int sum=0,sumt=0;
    for(int i =0 ;i <r;i++)
    {
        sum=0;
        for(int j=0; j < c;j++)
        {
            sum +=arr[i][j];
            sumt += arr[i][j];
        }
        cout<<"total marks of " <<i<<" student ="<<sum<<endl;
    }
    cout<<"total average ="<<(float)sumt/c<<endl;
    return 0;
}