#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);
        
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<int> result = sol.getConcatenation(nums);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
