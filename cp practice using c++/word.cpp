#include <iostream>
using namespace std;
int main(){
string s;
cin>>s;
int count1=0;
int count2=0;
for(int i=0;i<s.size();i++){

if(s[i]== tolower(s[i])){
count1++;

}
if(s[i]==toupper(s[i]))
{
    count2++;
}



}
for(int i=0;i<s.size();i++)
if(count1>=count2)
{
   s[i]=tolower(s[i]);
}
else{
    s[i]=toupper(s[i]);



}
cout<<s;
}