#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int row,col;
int mid=n/2+1;
for(row=1;row<=n;row++)
{
for(col=1;col<=n;col++)
{
if (col == 1 || col == n || 
    (row == col && row <= mid) || 
    (row + col == n + 1 && row <= mid))

printf("*");
else 
printf(" ");


}
printf("\n");


}





}