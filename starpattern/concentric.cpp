#include <iostream>
using namespace std;

int main() {
    const int n = 7; // Size of the pattern (use odd number for symmetric look)

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Condition for the outermost square and inner layers
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || 
                i == 1 || i == n - 2 || j == 1 || j == n - 2 ||
                i == 2 || i == n - 3 || j == 2 || j == n - 3) {
                cout << "* ";
            } else {
                cout << "  "; // Empty spaces in between
            }
        }
        cout << endl;
    }

    return 0;
}
