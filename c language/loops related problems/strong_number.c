#include <stdio.h>
int main(){

int number,remainder,sum=0;
printf("enter the the number:");
scanf("%d",&number);
int fact;
int temp=number;
while(temp!=0)
{
remainder=temp%10;
fact=1;

for(int i=1;i<=remainder;i++) 
{
fact=fact*i;

}
sum=sum+fact;
temp=temp/10;


}
if(sum==number)
printf("%d is the strong number",sum);
else
printf("%d is not strong number",sum);
}