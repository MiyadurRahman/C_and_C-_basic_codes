#include <iostream>
using namespace std;    
#include <vector>   
#include <algorithm>
//two pointer approach
// void reverse(string &str,int len,int i){
// if(i>=len){//base case
//     return;

// }

// swap(str[i],str[len]);//swapping characters
// reverse(str,len-1,i+1);//recursive call



int main(){

string str="HELLO WORLD";
reverse(str.begin(),str.end());
cout<<str;
 
string str1="ABCDEF";
string str2="ABCDEF";
if(str1.compare(str2)==0){
    cout<<endl<<"Strings are equal";
}
else{
    cout<<endl<<"Strings are not equal";


}
}