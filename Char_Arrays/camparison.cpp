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
}

bool compareArray(char a[], char b[]) {
    int aIndex = 0;
    int bIndex = 0;

    while (a[aIndex] != '\0' && b[bIndex] != '\0') {
        if (a[aIndex] != b[bIndex]) {
            return false;
        }

        aIndex++;
        bIndex++;
    }

    return a[aIndex] == '\0' && b[bIndex] == '\0';
}

int main() {
    char arr[] = "Hello";
    char brr[] = "hello";

    cout << compareArray(arr, brr);

    return 0;
}