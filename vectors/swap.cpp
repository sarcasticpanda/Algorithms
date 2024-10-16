#include<iostream>
#include<vector>
using namespace std;

int main()
{ 
    int val;
    vector<int> v1;

    // Input for vector v1
    do {
        cout << "Enter a value for vector v1 (0 to exit): " << endl;
        cin >> val;
        v1.push_back(val);
    } while(val);

    vector<int> v2;

    // Input for vector v2
    do {
        cout << "Enter a value for vector v2 (0 to exit): " << endl;
        cin >> val;
        v2.push_back(val);
    } while(val);

    // Erase the last element (which is 0) from both vectors
    v1.erase(v1.end() - 1);
    v2.erase(v2.end() - 1);

    // Print the contents of v1
    cout << "Contents of vector v1 before swap: ";
    for (auto it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Print the contents of v2
    cout << "Contents of vector v2 before swap: ";
    for (auto it = v2.begin(); it != v2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Swapping vectors
    v1.swap(v2);

    // Print the contents of v1 after swapping
    cout << "Contents of vector v1 after swap: ";
    for (auto it = v1.begin(); it != v1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Print the contents of v2 after swapping
    cout << "Contents of vector v2 after swap: ";
    for (auto it = v2.begin(); it != v2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
