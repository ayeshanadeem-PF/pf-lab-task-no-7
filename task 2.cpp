#include <iostream>

int main() {
    const int NUM_STUDENTS = 10;
    int hoursStudied[NUM_STUDENTS];

    // Ask for hours studied by each student
    std::cout << "Enter hours studied by each student:";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        std::cout << "Student " << (i + 1) << ": ";
        std::cin >> hoursStudied[i];
    }

    // Print hours studied by each student
    std::cout << "\nHours Studied by Each Student:";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        std::cout << "Student " << (i + 1) << ": " << hoursStudied[i] << " hours\n";
    }

    // Find student who studied the most
    int maxHours = hoursStudied[0];
    int maxStudent = 1;
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (hoursStudied[i] > maxHours) {
            maxHours = hoursStudied[i];
            maxStudent = i + 1;
        }
    }

    // Print student who studied the most
    std::cout << "\nStudent Who Studied the Most:";
    std::cout << "Student " << maxStudent << " with " << maxHours << " hours\n";

    return 0;
}
