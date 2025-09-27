#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
   
for(int i=0;i<n;i++){
    string arr;
    cin >> arr;

    int c = arr.length();
    if(c>10){



cout<<arr[0];
cout<<c-2;
cout<<arr[c-1]<<endl;
}

else
{
cout<<arr<<endl;

}

}

}

