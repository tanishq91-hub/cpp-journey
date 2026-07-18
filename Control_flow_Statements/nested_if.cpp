#include <iostream>
using namespace std;

int main() {
    int height, weight;

    cout << "Enter height (feet): ";
    cin >> height;

    cout << "Enter weight (kg): ";
    cin >> weight;

    if (height > 5) {
        if (weight > 70) {
            cout << "BMI Status: Good BMI";
        } else {
            cout << "BMI Status: Underweight";
        }
    } else {
        if (weight > 70) {
            cout << "BMI Status: Overweight";
        } else {
            cout << "BMI Status: Normal BMI";
        }
    }

    return 0;
}