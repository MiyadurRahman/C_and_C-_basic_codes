#include <iostream>
using namespace std;
#include<vector>
int main(){

 vector<vector<int>>mattix(3,vector<int>(4,0));// 3 rows and 4 columns with all initialised to 0
for(int i=0;i<mattix.size();i++){
    for(int j=0;j<mattix[i].size();j++){
        cout<<mattix[i][j]<<" ";
    }
    cout<<endl;
}
//vec={{1,2,3},{1,2,3},{1,2,3}};//not the efficient way to insert elements in vector of vectors
vector<vector<int>>vec;
vec.push_back({1,2,3});// valid way to insert elements in vector of vectors
vec.push_back({4,5,6});
vec.push_back({7,8,9});
vec.pop_back();// removes last row from the vector of vectors

//vector<vector<int>>vec{{1,2,3},{1,2,3},{1,2,3}};//another way to insert elements in vector of vectors

for(int i=0;i<vec.size();i++){
    for(int j=0;j<vec[i].size();j++){
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}
int maxsize=vec.max_size();
int capcity=vec.capacity();
cout<<"The capacity of vector is:"<<capcity<<endl;
cout<<"The maximum size of vector is:"<<maxsize<<endl;
}