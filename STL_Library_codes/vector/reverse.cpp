#include <iostream>
using namespace std;    
#include <vector>
#include <algorithm>
int main(){
string str="HELLO WORLD";
//vector<char> vec(str.begin(),str.end());//
reverse(str.begin(),str.end());
cout<<str;
return 0;



}