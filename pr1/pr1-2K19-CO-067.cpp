//Marks analysis of students

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of students\n";
    cin >> n;
    int array[n][6], studentTotal[n];
    float subAvg[5] = {0}, classAvg= 0;
    cout << "Enter roll of students and marks in 5 subjects line by line\n";
    
    
    int st;
    for(int i = 0;i<n;i++){
        cin >> array[i][0];
        st = 0;
        for(int j = 1; j < 6; j++){
            cin >> array[i][j];
            st += array[i][j];
            subAvg[j-1] += array[i][j];
            classAvg += array[i][j];
        }
        
        studentTotal[i] = st;
    }
    
    cout << "\n\n";
    
    
    //Subject averages
    cout << "Subject averages are:\n";
    for(int i = 0;i< 5;i++){
        cout << "Sub" << i+1 << "\t";
    }
    cout << "\n";
    for(int i = 0;i < 5;i++){
        subAvg[i] /= n;
        printf("%2.1f\t",subAvg[i]);
    }
    cout << "\n\n";
    //
    
    //Student Total and Average
    cout << "Students Total and Average\n";
    cout << "Roll" << "\t" << "Total" << "\t" << "Average\n";
    for(int i = 0;i<n; i++){
        cout << array[i][0] << "\t\t" << studentTotal[i] << "\t\t" << (float)studentTotal[i]/5 << "\n";
    }
    cout << "\n";
    //
    
    //Class Average
    classAvg /= (n*5);
    cout << "Class Average\n" << classAvg << "\n";
    //
    
    
    return 0;
}