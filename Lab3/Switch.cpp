#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter your grade (A, B, C, D, or F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
        case 'a':
            cout << "Excellent!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Good!" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Average." << endl;
            break;
        case 'D':
        case 'd':
            cout << "Needs improvement." << endl;
            break;
        case 'F':
        case 'f':
            cout << "Failing." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
            break;
    }

    return 0;
}

