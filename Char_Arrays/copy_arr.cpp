#include <iostream>
using namespace std;

void copy(char actualArr[], char copyArr[]) {
    int aIndex = 0;
    int bIndex = 0;

    while (actualArr[aIndex] != '\0') {
        // Start copying
        copyArr[bIndex] = actualArr[aIndex];
        aIndex++;
        bIndex++;
    }
    copyArr[bIndex] = '\0';
}

int main() {
    char actual[100] = "Tanishq_@";
    char ans[100];

    copy(actual, ans);

    cout << "Copy Array: " << ans << endl;

    return 0;
}