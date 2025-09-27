
#include <iostream>
using namespace std;
//to access a global when there is a local variable
int x;
int a(){
    int x=10;
    cout<<"global variable: "<<::x<<endl;
    cout<<"local variabel: "<<x;



}

int main (){

a();



}