#include <iostream>
#include <string>

using namespace std;
int main(){

int n,x=0;

cin>>n;
string sign;



for(int i=0;i<n;i++)
{cin>>sign;
int c=sign.size();
    if (sign.find("++") < c )
    {
        x++;
    }
    else 
    {
        x--;
    }
  








}
cout<<x<<endl;





}


