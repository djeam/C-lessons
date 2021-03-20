// Program 6_9
// Random number generation example with seed (new seed value)
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	srand(3); //set the seed for the pseudorandom sequence
	int x = rand();
	cout << "The random number is: " << x << endl;
	cout << "Another random number is: " << rand() << endl;
	cout << "...and another: " << rand() << endl;
}