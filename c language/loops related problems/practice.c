#include <stdio.h>
int main(){

int n;
int row,col;
scanf("%d",&n);
for(row=1;row<=n;row++)
{
for(col=0;col<=n-row;col++)
{
    printf(" ");

}
for(col=1;col<=n+1;col++)
{
    printf("*");
}
printf("\n");




}


}