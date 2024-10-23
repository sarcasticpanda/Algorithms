#include <iostream>
#include <cmath>
using namespace std;

void moveDisk(char fromPeg, char toPeg, int disk) {
    cout << "Move disk " << disk << " from " << fromPeg << " to " << toPeg << endl;
}

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    int moves = pow(2, n) - 1;
    for (int i = 1; i <= moves; i++) {
        if (i % 3 == 1) moveDisk(source, destination, 1);
        else if (i % 3 == 2) moveDisk(source, auxiliary, 2);
        else moveDisk(auxiliary, destination, 3);
    }
}

int main() {
    int n = 3;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
