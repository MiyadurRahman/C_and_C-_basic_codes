#include <stdio.h>
int main(){
int arr[100];
int n;
printf("enter the number size of array: ");
scanf("%d",&n);
int i;
int sum=0;

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);

}
for(i=0;i<n;i++)
{

sum=sum+arr[i];

}
printf("%d",sum);




}