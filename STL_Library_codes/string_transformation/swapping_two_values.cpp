#include <iostream>
using namespace std;    
#include <vector>       
#include <algorithm>
#include <utility>//for swap
// TheSwapping Method Described Above can be used for Integer
//  Array as well
//  ● Swapmethod comes under <utility> header file
int main(){
string st1="HELLO";
string st2="WORLD";
swap(st1,st2);//swapping two strings
cout<<st1<<" "<<st2<<endl;
string str="12345";
string str1="67890";
swap(str[0],str1[0]);//swapping first character of both strings
cout<<endl<<str<<" "<<str1;

string str3="ABCDE";
swap(str3[1],str3[3]);//swapping 2nd and 4th character of same string
cout<<endl<<str3;



}