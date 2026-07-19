#include <iostream>
using namespace std;

int getLength(char arr[]) {
    int count = 0;
    int index = 0;
    while (arr[index] != '\0') {
        count++;
        index++;
    }
    return count;
};

void concat(char a[], char b[]) {
    int aIndex = getLength(a);
    int bIndex = 0;

    while (b[bIndex] != '\0') {
        a[aIndex] = b[bIndex];
        aIndex++;
        bIndex++;
    }
    a[aIndex] = '\0';
}

int main() {
    char a[50] = "Tanishq";
    char b[50] = " Mathur";

    concat(a, b);

    cout << "Printing a: " << a << endl;

    return 0;
}