#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount=0;
        int currentcount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                currentcount++;
                maxcount=max(maxcount,currentcount);
            }
            else{
                currentcount=0;
            }
        }
        return maxcount;
    }
};

int main(){
    Solution sol;
int n=3;
vector<int> nums={1,1,0,1,1,1};
 int result=sol.findMaxConsecutiveOnes(nums);
cout<<result<<" ";

}