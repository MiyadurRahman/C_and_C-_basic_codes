#include <iostream>
using namespace std;
int main(){
string input;
cin>>input;
string input1="";
for(int i=0;i<input.size();i++){

if(i==0){

char capital=toupper(input[0]);
input1 +=capital;

}
else{
// char smaller=tolower(input[i]);
input1+=input[i];
}


}
cout<<input1;



}