int A[30][30];

int findAverage(int noOfStudents ,int noOfGrades ){

    float sum,average;

    for (int i = 0 ; i < noOfGrades ; i++) {
        for (int j = 0; j<noOfStudents; j++) {

        sum += A[i][j];

        }
        average = sum / noOfGrades;
       // cout << "   " << format(average);
        sum = 0;
        return format(average);

    }
