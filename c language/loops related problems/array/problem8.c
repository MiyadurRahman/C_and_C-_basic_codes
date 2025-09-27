#include <stdio.h>
int main(){

int a[100], b[100];
int size;
scanf("%d",&size);
for(int i=0;i<size;i++)
{printf("a[%d]=",i);
scanf("%d",&a[i]);




}
printf("a=");
for(int i=0;i<size;i++)
{

    printf("%d",a[i]);
printf(" ");



}
printf("\n");
for(int i=0;i<size;i++)
{

b[i]=a[i];



}
printf("b=");
for(int i=size-1;i>=0;i--)

{
    printf("%d",b[i]);
    printf(" ");
}

}