#include <iostream>
using namespace std;

int main() {
    int n, i = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    while (i <= n) {
        cout << i << " ";
        i++;
    }

    cout << endl;

    return 0;
}

