// Project 13_5
// Using a default parameter
#include <iostream>
#include <string>
using namespace std;

void printmultiple(string s, int times = 1) {
	for (int i = 0; i < times; i++) {
		cout << s << endl;
	}
}

int main() {
	printmultiple("Hello", 5);
	printmultiple("World");
}