#include <stdio.h>
int main(){
int a[100],b[100],c[100],n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("a[%d]=",i);
scanf("%d",&a[i]);



}
printf("\n");

for(int i=0;i<n;i++)
{
    printf("b[%d]=",i);
scanf("%d",&b[i]);



}
for(int i=0;i<n;i++)
{
    
c[i]=a[i]+b[i];



}
for(int i=0;i<n;i++)
{printf("c[%d]=",i);

printf("%d",c[i]);
 printf("c[%d]=",i);
printf(" ");

}


}