#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << i << " ";
        i = i + 1;
    } while (i <= 5);

    cout << "\n\n";

    int j = 1;
    do {
        cout << j << " ";
        j = j + 1;
    } while (j >= 5);

    return 0;
}