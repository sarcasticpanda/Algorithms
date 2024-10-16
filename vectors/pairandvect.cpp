#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main() {
    // Example pairs
    pair<int, float> p(23, 56.9f);
    cout << p.first << " " << p.second << endl;

    pair<int, float> p2;
    p2.first = 5;
    p2.second = 9.6f;
    cout << p2.first << " " << p2.second << endl;

    // Swap p and p2
    p.swap(p2);
    cout << p.first << " " << p.second << endl;

    // Auto-created pair with make_pair
    auto p3 = make_pair("Jerry", "Harry");
    cout << p3.first << " " << p3.second << endl;

    // Vector of pairs
    vector<pair<int, int>> tosum = {{1, 2}, {3, 4}};
    
    int sum = 0;
    int first_val, second_val;

    // Input additional pairs using a do-while loop
    do {
        cout << "Enter the first value of the pair (0 to exit): ";
        cin >> first_val;
        if (first_val == 0) break;  // Exit if first value is 0

        cout << "Enter the second value of the pair: ";
        cin >> second_val;

        // Push the entered pair into the vector
        tosum.push_back(make_pair(first_val, second_val));

    } while (first_val != 0);  // Continue until first value is 0

    // Erase the last element if the user entered a 0 for first_val
    if (first_val == 0) {
        tosum.erase(tosum.end() - 1);
    }

    // Sum up the second element of each pair
    for (int i = 0; i < tosum.size(); i++) {
        sum += tosum[i].second;
    }

    cout << "The sum of the second elements is: " << sum << endl;

    return 0;
}
