#include <iostream>
using namespace std;

int main() {
    // 1. double to int
    double pi = 3.14159265;
    int intPi = (int)pi;
    cout << intPi << endl;

    // 2. float to char
    float floatingNumber = 65.5;
    char charValue = (char)floatingNumber;
    cout << charValue << endl;

    // 3. int to float
    int a = 10;
    int b = 3.0;
    float c = a / ((float)b);
    cout << c << endl;

    return 0;
}