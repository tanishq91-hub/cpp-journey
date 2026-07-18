#include <iostream>
using namespace std;

int main() {
    int budget;

    cout << "Enter your budget: ";
    cin >> budget;

    if (budget > 2000000) {
        cout << "You can buy a Good Car.";
    } else {
        cout << "You can't buy a Good Car.";
    }

    return 0;
}