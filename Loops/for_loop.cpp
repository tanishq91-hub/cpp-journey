#include <iostream>
using namespace std;

int main() {
    for (int count = 1; count <= 10; count = count + 1) {
        cout << "Hello" << endl;
    }

    cout << "\n\n";

    // counting from 1 to 10
    for (int i = 1; i <= 10; i = i + 1) {
        cout << i << endl;
    }

    cout << "\n\n";

    // Using the break keyword
    for (int i = 1; i <= 10; i = i + 1) {
        cout << i << " ";
        if (i == 5) break;
    }

    cout << "\n\n";

    // Using the cotinue keyword
    for (int i = 1; i <= 10; i = i + 1) {
        if (i == 5) continue;
        cout << i << " ";
    }

    return 0;
}