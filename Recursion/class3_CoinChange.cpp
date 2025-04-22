#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    // Recursive function to solve the coin change problem
    int solve(vector<int>& coins, int amount) {
        // Base case: If amount is 0, we don't need any coins
        if (amount == 0) {
            return 0;
        }

        // Initialize the minimum number of coins required to a large value
        int minCoinAns = INT_MAX;

        // Try every coin to see which gives the minimum number of coins
        for (int i = 0; i < coins.size(); i++) {
            int coin = coins[i];

            // Only consider the coin if it's less than or equal to the current amount
            if (coin <= amount) {
                // Use the coin and solve the subproblem for the remaining amount
                int recursionAns = solve(coins, amount - coin);

                // Check if a valid answer was returned from the recursive call
                if (recursionAns != INT_MAX) {
                    // Add 1 to include the current coin
                    int coinsUsed = 1 + recursionAns;
                    // Update the minimum coins if the new one is better
                    minCoinAns = min(minCoinAns, coinsUsed);
                }
            }
        }

        // Return the minimum number of coins required for this amount
        return minCoinAns;
    }

    // Function to start the recursive process and handle the edge case
    int coinChange(vector<int>& coins, int amount) {
        int ans = solve(coins, amount);
        // If no valid answer was found, return -1
        if (ans == INT_MAX) {
            return -1;
        }
        // Otherwise, return the minimum number of coins
        else {
            return ans;
        }
    }
};

// Main function to test the solution
int main() {
    Solution s;

    // Example coin denominations
    vector<int> coins = {1, 2, 5};
    int amount = 11;

    // Call the coinChange function and print the result
    int result = s.coinChange(coins, amount);
    cout << "Minimum coins required: " << result << endl;

    return 0;
}
