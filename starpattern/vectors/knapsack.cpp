#include <iostream>
#include <vector>
using namespace std;

// Function to solve the 0/1 Knapsack problem
int knapsack(int capacity, vector<int> weights, vector<int> values, int n) {
    // Create a DP table to store the maximum value for each subproblem
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    // Build the DP table
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (weights[i - 1] <= w) {
                // Take the maximum of including or excluding the current item
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            } else {
                // If the item cannot be included, just carry forward the previous value
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // The bottom-right corner of the table contains the answer
    return dp[n][capacity];
}

int main() {
    int n; // Number of items
    cout << "Enter the number of items: ";
    cin >> n;

    vector<int> weights(n), values(n);
    int capacity;

    cout << "Enter the capacity of the knapsack: ";
    cin >> capacity;

    cout << "Enter the weights of the items:\n";
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    cout << "Enter the values of the items:\n";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    // Call the knapsack function and display the result
    int maxProfit = knapsack(capacity, weights, values, n);
    cout << "Maximum value that can be carried in the knapsack: " << maxProfit << endl;

    return 0;
}
