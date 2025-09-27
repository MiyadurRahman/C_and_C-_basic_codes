#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;
string s;
cin>>s;
int count_minimum=0;
for(int i=0;i<s.size();i++){
for(int j=i+1;j<s.size();j++){

if(s[i]==s[j])
{
 count_minimum++;
 break;
}
if(s[i]!=s[j]){

    break;
}
}


}
cout<<count_minimum;



}