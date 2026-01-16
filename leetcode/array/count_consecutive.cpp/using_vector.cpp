#include <iostream>
#include<vector>
using namespace std;
class Solution{

public:
vector<int> shuffle(vector<int>& nums,int n){
    vector<int> result(2*n);
for(int i=0;i<n;i++){
    result[2*i]=nums[i];
    result[2*i+1]=nums[n+i];

}
return result;

}








};
int main(){
    Solution sol;
int n=3;
vector<int> nums={2,5,1,3,4,7};
 vector<int> result=sol.shuffle(nums,n);
for(int num: result){
    cout<<num<<" ";
}

}