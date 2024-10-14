#include <iostream>
using namespace std;

int main() {
    const int n = 7; // Size of the diamond pattern (must be odd for symmetry)

    // Upper part of the diamond
    for (int i = 1; i <= n / 2 + 1; i++) {
        // Printing leading spaces
        for (int j = i; j < n / 2 + 1; j++) {
            cout << "  ";
        }
        // Printing stars and spaces in between
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n / 2; i >= 1; i--) {
        // Printing leading spaces
        for (int j = n / 2 + 1; j > i; j--) {
            cout << "  ";
        }
        // Printing stars and spaces in between
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
/*
      * 
    *   * 
  *       * 
*           * 
  *       * 
    *   * 
      * 
*/