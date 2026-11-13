#include <iostream>
using namespace std;
int main() {
	int age{};
	int choice{};
	int price = 0;
	cout << "Age: ";
	if (!(cin >> age)) {
		cout << "INPUT ERROR\n";
		return 0;
	}
	if (age < 7 || age > 120) {
		cout << "AGE_ERROR\n";
		return 0;
	}
	switch (choice) {
	case 1: price = 500; break;
	case 2: price = 700; break;
	case 3: price = 900; break;
	default:
		cout << "MENU_ERROR\n";

	}		return 0;
	return 0;
}
