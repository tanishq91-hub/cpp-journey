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

int main() {
    char arr[] = " Tanishq_@_Mathur ";
    cout << getLength(arr) << endl;

    return 0;
}