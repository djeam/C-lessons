// Program 12_10
// Same variable names in different scopes
#include <iostream>
using namespace std;

float calculate_loan(float principle, float payment) {
	float balance = principle - payment; // Remaining loan after payment
	cout << "Inside the function, the value of the loan balance is: " << balance << endl;
	return balance;
}

int main() {
	float balance = 100.0; // Set up variable to keep track of an account balance
	float loan_principle = 500.0;
	float loan_payment = 25.0;

	// Now use that to pay the loan
	balance -= loan_payment;
	cout << "Before the function call, the value of the account balance is: " << balance << endl;
	loan_principle = calculate_loan(loan_principle, loan_payment);
	cout << "After the function call, the value of the account balance is: " << balance << endl;
}