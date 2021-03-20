// Program 16_8
// Vending Machine class example 7 - vending an item
#include <iostream>
using namespace std;

class vending_machine {
public:

	float price = 1.0;
	float credit = 0.0;
	float money_collected = 0.0;
	int inventory = 0;

	int number_remaining() {
		return inventory;
	}

	void deposit_money(float amount) {
		credit += amount;
		cout << "Current credit is " << credit << endl;
		}

	float return_change() {
		float amount_to_return;
		amount_to_return = credit;
		credit = 0;
		cout << "Returning " << amount_to_return << " in change." << endl;
		return amount_to_return;
	}

	bool vend() {
		if (credit < price) {
			cout << "Please deposit more money" << endl;
			return false;
		}
		else if (inventory <= 0) {
			cout << "Sold out" << endl;
			return false;
		}
		else {
			credit -= price;
			cout << "Vending an item" << endl;
			inventory--;
			return_change();
			return true;
		}
	}
};

int main() {
	vending_machine lobby_machine;
	lobby_machine.inventory = 200;

	lobby_machine.deposit_money(0.25);
	lobby_machine.deposit_money(0.25);
	lobby_machine.deposit_money(0.60);

	if (lobby_machine.vend()) {
		cout << "We got an item!" << endl;
	}
	else {
		cout << "No item for us." << endl;
	}
}