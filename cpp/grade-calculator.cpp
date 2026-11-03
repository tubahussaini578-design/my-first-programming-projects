#include <iostream>
#include <string>
using namespace std;

char getGrade(double avg) {
    if (avg >= 90) return 'A';
    if (avg >= 80) return 'B';
    if (avg >= 70) return 'C';
    if (avg >= 60) return 'D';
    return 'F';
}

int main() {
    int subjects;
    cout << "Enter number of subjects: ";
    cin >> subjects;

    if (subjects <= 0) {
        cout << "Number of subjects must be greater than 0." << endl;
        return 1;
    }

    double total = 0;
    for (int i = 1; i <= subjects; i++) {
        double marks;
        cout << "Enter marks for subject " << i << " (0-100): ";
        cin >> marks;

        if (marks < 0 || marks > 100) {
            cout << "Invalid marks. Try again." << endl;
            i--;
            continue;
        }
        total += marks;
    }

    double average = total / subjects;
    cout << "\nTotal: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << getGrade(average) << endl;

    return 0;
}
