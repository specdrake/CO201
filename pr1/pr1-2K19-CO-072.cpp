#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of students ";
    cin>>n;
    int arr[n][5];
    for (int i=0; i<n; i++)
    {
		cout << "Serial No " << (i + 1) << ": " << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "Enter Marks in ";
			switch (j)
			{
			case 0: { cout << "DS: "; break; }
			case 1: { cout << "OOP: "; break; }
			case 2: { cout << "Analog: "; break; }
			case 3: { cout << "M&S: "; break; }
			case 4: { cout << "Discrete: "; break; }
			default: break;
			}
			cin >> arr[i][j];
		}
	}
    float oop, ds, analog, ms, discrete;
	for (int i = 0; i < n; i++)
	{
		cout << "Serial No  "<< (i+1) <<" : "<<endl;
		cout << "DS: " << arr[i][0] << endl;
		cout << "OOP: " << arr[i][1] << endl;
		cout << "Analog: " << arr[i][2] << endl;
		cout << "M&S: " << arr[i][3] << endl;
		cout << "Discrete: " << arr[i][4] << endl;
		double total = 0;
		for (int j = 0; j < 5; j++) total += arr[i][j];
		cout << "Total Marks: "<< total << endl;
		cout << "Average Marks :" << (total / 5.0) << endl;
		ds += arr[i][0];
		oop += arr[i][1];
		analog += arr[i][2];
		ms += arr[i][3];
		discrete += arr[i][4];
	}

	cout << " Class Average : " << endl;
	cout<< "DS : "<<(ds/(n*1.0))<<endl;
	cout<< "OOP : "<<(oop/(n*1.0))<<endl;
	cout<< "Analog : "<<(analog/(n*1.0))<<endl;
	cout<< "M&S:  "<<(ms/(n*1.0))<<endl;
	cout<< "Discrete : "<<(discrete/(n*1.0))<<endl;
	cout<< " Total Average : "<<(ds + oop + analog + ms + discrete)/(n*5)<<endl;
	return 0;
}


