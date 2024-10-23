#include <iostream>
#include <stack>
using namespace std;

struct Move {
    int disk;
    char source, destination;
};

void towerOfHanoi(int n) {
    stack<Move> s;
    s.push({n, 'A', 'C'}); // Start moving n disks from A to C

    while (!s.empty()) {
        Move currentMove = s.top();
        s.pop();

        if (currentMove.disk == 1) {
            cout << "Move disk 1 from " << currentMove.source << " to " << currentMove.destination << endl;
        } else {
            s.push({currentMove.disk - 1, 'B', currentMove.destination});
            s.push({1, currentMove.source, currentMove.destination});
            s.push({currentMove.disk - 1, currentMove.source, 'B'});
        }
    }
}

int main() {
    int n = 3;
    towerOfHanoi(n);
    return 0;
}
