#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
vector<int> vec{1, 2, 3, 2, 1, 2, 3, 4, 5};
int it = count(vec.begin(), vec.end(), 2);

cout<<it;
string str="hello world";
int Count=count(str.begin(),str.end(),'o');
cout<<Count;
//int result=std::count(vec.begin(),vec.end(),3);//counting number of times 3 occurs in vector



}