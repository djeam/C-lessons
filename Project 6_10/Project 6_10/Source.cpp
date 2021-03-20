//Program 6_10
// Random number generation with time-based seed
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0)); //Set the seed for pseudorandom sequence
	int x = rand();
	cout << "The random number is: " << x << endl;
	cout << "Here is another random number: " << rand() << endl;
	cout << "...and another:  " << rand () << endl;
}