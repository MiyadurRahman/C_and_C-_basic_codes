#include <stdio.h>
int main(){

int array[100];
int size;
printf("enter the element number of the array: ");
scanf("%d",&size);
for(int i=0;i<size;i++)
{
scanf("%d",&array[i]);


}
int pos;
printf("enter the position: ");
scanf("%d",&pos);
if (pos==-1||pos>=size)
{
    printf("invalid number");
    return 1;
}
for(int i=pos;i<size-1;i++)
{
    array[i]=array[i+1];

}
size--;
printf("new array: ");
for(int i=0;i<size;i++)
{
printf("%d",array[i]);

printf(" ");
}
}