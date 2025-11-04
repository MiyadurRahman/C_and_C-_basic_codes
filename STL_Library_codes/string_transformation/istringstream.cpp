#include <iostream>
using namespace std;    
#include <vector>   
#include <algorithm>
#include <sstream>

int main(){
string str="12345 456 789";
 istringstream iss(str);
 int num1;
 int num2;
 int num3;
 cout<<iss.str()<<endl;//prints the original string
  iss>>num1>>num2>>num3;//extracting integers from stringstream
 cout<<num1<<endl<<num2<<endl<<num3;//printing the extracted integers

string s = to_string(num1);
s.erase(2,2);//erasing characters from index 2 to 2 characters ahead
cout<<endl;
cout<<s;

}