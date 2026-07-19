#include <iostream>
using namespace std;

int getMultiplication(int x, int y, int z) {
    int result = x * y * z;

    return result;
}

void printNameTenTimes() {
    for (int i = 1; i <= 10; i++) {
        cout << "Tanishq" << " ";
    }
}

void printMultiples(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n * i << endl;
    }
}

char convertIntoUpperCase(char ch) {
    char ans = ch - 'a' + 'A';
    return ans;
}

int main() {
    int multiplication = getMultiplication(5, 4, 3);
    cout << multiplication << endl;

    printNameTenTimes();
    cout << endl;

    printMultiples(8);
    cout << endl;

    char result = convertIntoUpperCase('h');
    cout << result;

    return 0;
}