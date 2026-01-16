#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int ans[2*n];
int nums[n];
for(int i=0;i<n;i++){
    cin>>nums[i];
    ans[i]=nums[i];
}
for(int i=0;i<2*n;i++){
    
    ans[i+n]=nums[i];
    cout<<ans[i]<<" ";

}


}