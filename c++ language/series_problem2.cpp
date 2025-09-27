#include <iostream>
using namespace std;
int main(){

int a=1,b=2,n1,n2;
int sum=0;
cout<<"enter the range n1 and n2: ";
cin>>n1>>n2;
while(a<=n1 && b<=n2)
{
sum=sum+(a*b);
a+=1;
b+=1;


}
cout<<"the value of sum:"<<sum;


}