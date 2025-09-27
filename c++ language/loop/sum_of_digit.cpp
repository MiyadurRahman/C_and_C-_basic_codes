#include <iostream>
using namespace std;
int main(){

int num,sum=0;
int remaider;
int temp;
cout<<"enter the number : ";
cin>>num;
temp=num;
while(temp!=0)
{
remaider=temp%10;
sum=sum+remaider;
temp=temp/10;


}
cout<<"sum of the digits are: "<<sum;


}