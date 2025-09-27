#include <iostream>
using namespace std;
int main(){

int num;
cout<<"enter the number: ";
cin>>num;
for(int i=2;i<num;i++){
    if(num%i==0)
    {
        cout<<"not prime number";
        break;



    }
    else{

        cout<<num<<" is a prime number";
        break;
    }




}




}