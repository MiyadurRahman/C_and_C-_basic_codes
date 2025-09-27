#include <iostream>
#include<string>
using namespace std;
int main(){

string s1,s2;
cin>>s1;
cin>>s2;
string s3=s1;
string s4=s2;
for(int i=0;i<s1.size();i++)
{
  s3[i]=tolower(s3[i]);
}

    for (int i = 0; i < s4.size(); i++) {
        s4[i] = tolower(s4[i]);
    }
if(s3.compare(s4)>0)
{
    cout<<"1";
}
else if(s3.compare(s4)<0)
{
    cout<<"-1";
}else
{
   cout<<"0";
}
}