// Program 7_4
// Reporting temperature greater than the average
#include <iostream>
using namespace std;

int main() {
// Read in temperature data, keeping sum
	int temps[1000];
	int counttemps = 0;
	int currenttemp = 0;
	int total = 0;
	cout << "Enter a temperature: ";
	cin >> currenttemp;
	while (currenttemp < 200) {
		temps[counttemps] = currenttemp;
		total += currenttemp;
		counttemps++;
		cout << "Enter a temperature. Enter 200 or greater when done:";
		cin >> currenttemp;
	}

	//Determine and print out average
	float average = (float)total / (float)counttemps;
	cout << "The average temperature was " << average << endl;

	//Print out elements greater than the average
	for (int i = 0; i < counttemps; i++) {
		if (temps[1] > average) {
			cout << temps[1] << " was above the average temperature." << endl;
		}
	}
}
