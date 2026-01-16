#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    vector<int> ans(2 * n);
    
    // Read the array
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // Concatenate the array
    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    
    // Print the concatenated array
    for (int i = 0; i < 2 * n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}