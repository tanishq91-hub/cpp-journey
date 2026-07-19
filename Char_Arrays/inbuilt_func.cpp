#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char actual[] = "Tanishq";
    char ans[100];

    strcpy(ans, actual);
    cout << "Copied string: " << ans << endl;

    cout << "Length of actual: " << strlen(actual) << endl;

    if (strcmp(actual, ans) == 0) {
        cout << "Char Arrays are same" << endl;
    } else {
        cout << "Char Arrays are not same" << endl;
    }

    char surname[] = " Mathur";
    strcat(ans, surname);

    cout << "After concatenation: " << ans << endl;

    return 0;
}