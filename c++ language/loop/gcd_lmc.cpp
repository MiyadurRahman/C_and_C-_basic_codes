#include <iostream>
using namespace std;
int main (){

int num1,num2,n1,n2;
int gcd,lcd;
int rem;
cout<<"enter the numbers : ";
cin>>num1>>num2;
n1=num1;
n2=num2;

while(n2!=0){

rem=n1%n2;
n1=n2;
n2=rem;

}
gcd=n1;
lcd=(num1*num2)/gcd;
cout<<"the value of gcd: "<<gcd<<endl<<"the value of lcd: "<<lcd;




}