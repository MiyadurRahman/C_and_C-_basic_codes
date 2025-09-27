#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout << "enter the numbers : ";
    cin >> num1 >> num2;


    int sum = num1 + num2;
    int sub = num1 -num2;
    float div =(float) num1/num2;
    int mod = num1 % num2;

    cout<< "sum is: "<< sum<<endl;
    cout<< "sub is: "<< sub<<endl;
    cout<< "div is: "<< div<<endl;
    cout<< "mod is: "<< mod;




}