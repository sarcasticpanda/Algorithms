#include <iostream>
using namespace std;

int main() {
    const int n = 9; // Fixed size for the zig-zag pattern

    for (int i = 1; i <= 3; i++) {  // Fixed number of rows for three zigzag lines
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0)) {
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
    *       *  
  *   *   *   * 
*       *       *
*/