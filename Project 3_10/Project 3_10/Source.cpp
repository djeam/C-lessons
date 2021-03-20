// Program 3_10
// Illustrating an if statement
#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter you age: ";
	cin >> age;
	if ((age < 18) || (age >= 65)) {
		cout << "You're eligible for a discount!" << endl;
	}
}