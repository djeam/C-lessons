// Program 12_6
// A more complete function: counting words in a string
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int word_count(string str_to_count) {
	// turn the stream into a stringstream
	stringstream ss(str_to_count);
	int count = 0;
	string word;
	// Count the number of individual words by reading from the stringstream
	while (!ss.eof()) {
		ss >> word;
		count++;
	}
	return count;
}


int main() {
	string s = "This is a string that has eight words.";
	cout << "There are " << word_count(s) << " words in the string." << endl;

}