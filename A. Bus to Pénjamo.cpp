#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // Optimize IO operations
    cin.tie(nullptr);                 // Optimize IO operations

    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int n, x;  // n: number of models, x: max cars a customer can buy
        cin >> n >> x;

        vector<int> a(n);  // Array to store the number of cars for each model
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int customers = 0;
        for (int i = 0; i < n; ++i) {
            // Calculate the number of customers required for model i
            customers += (a[i] + x - 1) / x;  // Equivalent to ceil(a[i] / x)
        }

        // Output the total number of customers needed for this test case
        cout << customers << "\n";
    }

    return 0;
}

