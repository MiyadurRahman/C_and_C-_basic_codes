#include <iostream>
using namespace std;
  
int larger_num() 
{ 
  
    // Initialize variable 
    int A = 39, B = 10, C = 23; 
  
    // Evaluate largest of three using ternary operator 
    int maxNum 
        = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C); 
  
    cout << "Largest in three  number is " << maxNum << endl; 
  
    return 0; 
}

int main(){

int a=10,b=20;
int d=a>b ?a:b;
cout<<"bigger in two number is "<<d<<endl;
larger_num();




}