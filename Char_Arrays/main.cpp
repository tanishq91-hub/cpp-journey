#include <iostream>
using namespace std;

int main() {
    char arr[10] = "Tanishq\0";

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}