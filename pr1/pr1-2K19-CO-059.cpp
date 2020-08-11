#include<iostream>
#include<math.h>
typedef long long int ll;
using namespace std;
int main() {
	ll n;
	cout << "enter number of students";
	cin >> n;
	int A[n + 1][6];
	for (auto i = 1; i <=n; i++) {
		for (auto j = 1; j < 6; j++) {
			cout << "Enter marks of student" << i << " in subject" << j << endl;
			cin >> A[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		float avg = 0;
		for (auto j = 1; j < 6; j++) {
			avg += A[i][j];
		}
		cout << "The average of " << i << "student is " << avg/5<< endl;
	}
	for (int i = 1; i < 6; i++) {
		float avg = 0;
		for (auto j = 1; j <= n; j++) {
			avg += A[j][i];
		}
		cout<< "The average of class in" << i << "th subject is " << avg/n << endl;

	}

	return 0;


}
