#include <iostream>
using namespace std;
int main(){

string input;
cin>>input;
int count=0;
for(int i=0;i<input.size();i++){
    for(int j=i+1;j<input.size();j++){
    if(input[i]==input[j]){

        count++;
        break;
    }
     
    

    }



}
int uniquechar=input.size()-count;
if(uniquechar%2==0){

    cout<<"CHAT WITH HER!";
}
else{

cout<<"IGNORE HIM!";

}




}