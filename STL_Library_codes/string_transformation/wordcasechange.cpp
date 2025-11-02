#include <iostream>
using namespace std;    
#include <vector> 
#include <algorithm> 
int main(){
string str="HELLO WORLD";
transform(str.begin(),str.end(),str.begin(),::tolower);//changing to lowercase
cout<<str<<endl;
transform(str.begin(),str.end(),str.begin(),::toupper);
cout<<str;
//for char
char ch='a';
ch=toupper(ch);
cout<<endl<<ch;
char ch1='B';
ch1=tolower(ch1);   

}