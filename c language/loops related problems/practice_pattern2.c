#include <stdio.h>
int main(){

int n;
int row,col;
scanf("%d",&n);
for(row=1;row<=n;row++)
{
for(col=1;col<=n;col++)
{
if(row==1||row==3||row==5)
    printf("*");
else if((row== 2 && col == n) || (row == 4 && col== 1))
printf("*");
else
printf(" ");
}


printf("\n");
}







}