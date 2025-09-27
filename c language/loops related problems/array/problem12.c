#include <stdio.h>
int main(){
int a[100],b[100],n1,n2;
printf("enter the size of the element of a= ");
scanf("%d",&n1);
printf("enter the number of element of b= ");
scanf("%d",&n2);
for(int i=0;i<n1;i++)
{
    printf("a[%d]",i);
scanf("%d",&a[i]);

}
printf("\n");
for(int i=0;i<n2;i++)
{
    printf("b[%d]",i);
scanf("%d",&b[i]);

}
int temp1,temp2;
for(int i=0;i<n1;i++)
{
   temp1=a[i];
   temp2=b[i];
   a[i]=b[i];
   b[i]=temp1;

}
printf("after the swap \na: ");
for(int i=0;i<n1;i++)
{
  printf("%d",a[i]);
  printf("  ");

}
printf("\n\n");
printf("b: ");
for(int i=0;i<n1;i++)
{
    printf("%d",b[i]);
    printf(" ");

}


}