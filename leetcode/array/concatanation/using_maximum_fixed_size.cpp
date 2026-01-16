#include <iostream>
using namespace std;

// Define maximum possible size
const int MAX_SIZE = 1000;

int main() {
    int n;
    cin >> n;
    
    // Use fixed-size arrays
    int nums[MAX_SIZE];
    int ans[2 * MAX_SIZE];
    
    // Read input
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // Concatenate
    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    
    // Print
    for (int i = 0; i < 2 * n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}