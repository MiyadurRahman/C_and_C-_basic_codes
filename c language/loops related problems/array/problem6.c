#include <stdio.h>
int main(){

int a[100];
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("a[%d]",i);
scanf("%d",&a[i]);



}
printf("a=");
for(int i=0;i<n;i++)
{
    printf("%d",a[i]);
printf(" ");


}
int value;
printf("the key element we are searching: ");

scanf("%d",&value);
int position=-1;

for(int i=0;i<n;i++)
{
   if(value==a[i])
   {position=i+1;
   }
   
    
}
 if(position==-1)
    {printf("not found");
    
    
    }
else printf("the position od %d is :%d \n",value,position);


}