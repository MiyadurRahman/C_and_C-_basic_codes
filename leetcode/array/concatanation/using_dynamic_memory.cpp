#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Dynamically allocate memory
    int* nums = new int[n];
    int* ans = new int[2 * n];
    
    // Read input
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // Concatenate
    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    
    // Print result
    for (int i = 0; i < 2 * n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    // Free memory
    delete[] nums;
    delete[] ans;
    
    return 0;
}