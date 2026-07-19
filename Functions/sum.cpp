#include <iostream>
using namespace std;

int sum(int a, int b) {
    int totalSum = a + b;
    return totalSum;
}

int main() {
    int ans = sum(5, 10);
    cout << ans << endl;

    cout << sum(45, 45) << endl;

    return 0;
}