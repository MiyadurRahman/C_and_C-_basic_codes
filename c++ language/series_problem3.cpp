#include <iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"enter the range: ";
cin>>n;
for(int i=1;i<=n;i++)
{
    sum=sum+i*i;
}
cout<<sum;



}