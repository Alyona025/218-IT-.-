#include <iostream>
using namespace std;

int main() {
    int age;
    int price;
    int choice;

    cout << "Age: ";
    if (!(cin >> age)) {
        cout << "INPUT_ERROR\n";
        return 0;
    }

    if (age < 7 || age > 120) {
        cout << "AGE_ERROR\n";
        return 0;
    }

    cout << "Choose tariff:\n";
    cout << "1 - Quest (500 rub)\n";
    cout << "2 - Arena (700 rub)\n";
    cout << "3 - Horror (900 rub)\n";

    if (!(cin >> choice)) {
        cout << "INPUT_ERROR\n";
        return 0;
    }

    switch (choice) {
        case 1:
            price = 500;
            break;
        case 2:
            price = 700;
            break;
        case 3:
            price = 900;
            break;
        default:
            cout << "MENU_ERROR\n";
            return 0;
    }

    if (age >= 7 && age <= 12) {
        price = price - 100;
    }

    cout << "TOTAL = " << price << "\n";
    return 0;
}

