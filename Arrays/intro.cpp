#include <iostream>
using namespace std;

int main() {
    int multipleOf2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    cout << multipleOf2[3] << endl;
    cout << multipleOf2[8] << endl;

    for (int i = 0; i <= 9; i++) {
        cout << multipleOf2[i] << " ";
    }

    return 0;
}