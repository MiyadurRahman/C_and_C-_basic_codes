#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
string str="12345";
int num=stoi(str);
cout<<num;
int sum=num+5;
cout<<endl<<sum;
// If the input string is not a valid integer, stoi() will throw an
//  invalid_argument exception.
string newstring="abc";
try{
    int num1=stoi(newstring);
    cout<<newstring;
    cout<<num1;

}
catch(const invalid_argument& e){
    cout<<endl<<"Invalid argument: "<<e.what();


}
}// Similarly, you can use stof() to convert a string to a float
//  and stod() to convert a string to a double.