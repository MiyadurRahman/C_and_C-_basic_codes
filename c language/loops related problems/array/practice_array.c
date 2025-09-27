#include <stdio.h>
int main (){

int n;
int a[100];
scanf("%d",&n );
int k=4;
for(int i=0;i<n;i++)
{

scanf("%d",&a[i]);


} 

for(int i=0;i<n;i++)
{

if(i%2==0)
a[i]=a[i]+k;
else
a[i]=a[i]-k;
} 
for(int i=0;i<n;i++)
{

printf("%d",a[i]);
printf(" ");


} 



}