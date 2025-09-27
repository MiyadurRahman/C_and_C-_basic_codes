#include <stdio.h>
int main(){

int a[100];
int size;

printf("ente the numbe of element : ");
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&a[i]);


}

for(int i=0;i<size;i++)
{
if(a[i]%3==0)
{
    a[i]=-1;
}


}
printf("new a: ");
for(int i=0;i<size;i++)
{
printf("%d",a[i]);
printf("  ");

}


}