#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }

        // Print decreasing sequence of numbers
        for (int j = i; j >= 1; --j) {
            cout << j;
        }

        // Print increasing sequence of numbers
        for (int j = 2; j <= i; ++j) {
            cout << j;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
