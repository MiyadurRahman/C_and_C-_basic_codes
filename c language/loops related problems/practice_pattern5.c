#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int row,col;
int even;
for (row=n;row>=1;row--)
{
for(col=2*row;col>=1;col-=2)
{

printf("%d ",col);



}
printf("\n");


}



}