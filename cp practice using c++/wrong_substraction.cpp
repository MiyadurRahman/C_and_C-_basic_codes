#include <iostream>
using namespace std;
int main(){

int n,k;
cin>>n>>k;
int temp=n;
for(int i=0;i<k;i++)
{
int rem=temp%10;
if(rem!=0)
{
 temp=temp -1;

}
if(rem==0)
{
    temp=temp/10;
}



}
cout<<temp;
}