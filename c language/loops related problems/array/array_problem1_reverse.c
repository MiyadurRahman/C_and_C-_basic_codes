#include <stdio.h>
int main(){
int arr[100];
int n;
printf("enter the number size of array: ");
scanf("%d",&n);
int i;

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);

}
for(i=n-1;i>=0;i--)
{

printf("%d",arr[i]);
printf(" ");

}




}