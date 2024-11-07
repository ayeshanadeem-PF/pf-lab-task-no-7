
#include <iostream>
using namespace std;
int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    int positive = 0, negative = 0, odd = 0, even = 0, zero = 0;

    // Ask user to input ten numbers
    cout << "Enter 10 integers:";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];

        // Count numbers based on conditions
        if (numbers[i] > 0) {
            positive++;
        } else if (numbers[i] < 0) {
            negative++;
        }
        if (numbers[i] % 2 == 0 && numbers[i]!= 0) {
            even++;
        } else if (numbers[i] != 0) {
            odd++;
        }
        if (numbers[i] == 0) {
            zero++;
        }
    }
    // Print results
    cout << "Results:";
    cout << "Number of positive numbers: " << positive;
    cout << "Number of negative numbers: " << negative ;
    cout << "Number of odd numbers: " << odd;
    cout << "Number of even numbers: " << even;
    cout << "Number of zeros: " << zero;

    return 0;
}
