#include <iostream>
using namespace std;
int main() {
   int a, b ;
   cout<<"enter number of students followed by number of subjects ";
cin>>a>>b;
int arr[a][b];
for(int i=0;i<a;i++){
	cout<<"enter marks of student "<<i+1;
    for (int j=0;j<b;j++){

        cin>>arr[i][j];
    }
}

for(int i=0;i<a;i++){
    cout<<"enter marks of student"<<i+1<<endl;
    for (int j=0;j<b;j++){
cout<<arr[i][j]<<"    ";}
cout<<endl;}







for( int i=0;i<a;i++){
    int sum=0;
    cout<<"total of student "<<i+1<<"     is"<<"      "<<endl;
    for (int j=0;j<b;j++){
        sum=sum + arr[i][j];

    }cout<<sum<<endl;
    cout<<"average of student   is     "<< sum/b<<endl;
    
}
for( int j=0;j<b;j++){
    int sum=0;
    cout<<"total of subject "<<j+1<<"     is"<<"      "<<endl;
    for (int i=0;i<a;i++){
        sum=sum + arr[i][j];

    }cout<<sum<<endl;
    cout<<"average of subject   is     "<< sum/b<<endl;
    }



}



