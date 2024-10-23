#include <iostream>
using namespace std;

int steps = 0;

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        steps++;
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    steps++;
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n = 3;
    towerOfHanoi(n, 'A', 'C', 'B');
    cout << "Total moves: " << steps << endl;
    return 0;
}
