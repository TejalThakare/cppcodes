#include <iostream>
using namespace std;

int main() {
    int n, i = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    do {
        cout << i << " ";
        i++;
    } while (i <= n);

    cout << endl;

    return 0;
}

