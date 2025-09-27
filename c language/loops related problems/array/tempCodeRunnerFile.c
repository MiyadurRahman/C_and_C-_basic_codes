#include <stdio.h>
int main(){

char a[100];
int n;
int count=0;
scanf("%d",&n);

for(int i=0;i<n;i++)
{
scanf("%c",&a[i]);



}
for(int i=0;i<n;i++)
{
printf("%c",a[i]);



}

for(int i=0;i<n;i++)
{
if(a[i]=='a')count++;
if(a[i]=='e')count++;
if(a[i]=='i')count++;
if(a[i]=='o')count++;
if(a[i]=='i')count++;



}
printf("%d",count);


}