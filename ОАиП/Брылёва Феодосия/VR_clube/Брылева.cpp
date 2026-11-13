#include <iostream>

using namespace std;

int main() {
    int age = 0;
    cout << "Age: ";
    if (!(cin >> age)) {
        cout << "INPUT_ERROR\n";
        return 0;
    }

    // Проверка границ возраста
    if (age < 7 || age > 120) {
        cout << "AGE_ERROR\n";
        return 0;
    }

    int tariff = 0;
    cout << "Tariff: ";
    if (!(cin >> tariff)) {
        cout << "INPUT_ERROR\n";
        return 0;
    }

    int price = 0;
    switch (tariff) {
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

    // Детская скидка
    if (age <= 12) {
        price -= 100;
    }

    cout << "TOTAL=" << price << "\n";
    return 0;
}