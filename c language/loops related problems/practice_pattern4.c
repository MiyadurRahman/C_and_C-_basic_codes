#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int row,col;
int mid=n/2+1;
for(row=1;row<=n;row++)
{
for(col=1;col<=n-row;col++)
{
printf(" ");

}
int even=2;
for(col=1;col<=2*row-1;col++)
{

  
    printf("%d ",even);
    even+=2;
}
printf("\n");

}





}