#include <iostream>
using namespace std;

class TowerOfHanoi {
public:
    void solve(int n, char source, char destination, char auxiliary) {
        if (n == 1) {
            cout << "Move disk 1 from " << source << " to " << destination << endl;
            return;
        }
        solve(n - 1, source, auxiliary, destination);
        cout << "Move disk " << n << " from " << source << " to " << destination << endl;
        solve(n - 1, auxiliary, destination, source);
    }
};

int main() {
    TowerOfHanoi toh;
    int n = 3;
    toh.solve(n, 'A', 'C', 'B');
    return 0;
}
