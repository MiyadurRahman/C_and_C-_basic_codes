#include <iostream>
using namespace std;
int main(){
string digit;
cin>>digit;
int count=0;
for(int i=0;i<digit.size();i++)
{
if(digit[i]=='4' ||digit[i]=='7'){
    count++;
}

}

 if (count == 4 || count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 }