#include <iostream>
using namespace std;

int main() {
    const int SIZE = 7;
    int numbers[SIZE];
    int count = 0;

    // Ask user to input seven integers
    cout << "Enter seven integers:";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    // Count multiples of five
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] % 5 == 0) {
            count++;
        }
    }

    // Print result
    cout << "Number of multiples of five: " << count << std::endl;

    return 0;
}