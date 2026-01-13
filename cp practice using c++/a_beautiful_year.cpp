#include <iostream>
#include <string>
using namespace std;
int main(){
int n;
cin>>n;
int temp=n+1;
while(1){
string s=to_string(temp);
bool distinct=true;
for (int i=0;i<s.length()-1;i++){
    for(int j=i+1;j<s.length();j++){

        if(s[i]==s[j]){
            distinct=false;
            break;
        }
    }

  


}
  if(distinct){
        cout<<temp;
        break;
    }
   temp++;
}
}