#include <stdio.h>
int main(){




int a[100];
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);


}
int max=a[0];
int min=a[0];
for(i=1;i<n;i++)
{

if(max<a[i])
max=a[i];

if(min>a[i])
min=a[i];




}
printf("max=%d",max);
printf("\nmin=%d",min);
}