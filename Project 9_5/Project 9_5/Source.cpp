// Program 9_5
// Using getline
#include <iostream>
#include <string>
using namespace std;

int main() {
	string username;
	cout << "what is your name? ";
	getline(cin, username);
	cout << "Howdy, " << username << "!" << endl;

}