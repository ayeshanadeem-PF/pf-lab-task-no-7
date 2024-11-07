#include <iostream>
using namespace std;
int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    // Ask user to input ten numbers
    cout << "Enter ten numbers:";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    // Print array in reverse order
    cout << "Array in reverse order:";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }


    return 0;
}
