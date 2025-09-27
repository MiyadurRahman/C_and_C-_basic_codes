#include <iostream>
using namespace std;
int main(){
int n,row,col;
scanf("%d",&n);
for(row=n;row>=1;row--)
{
for(col=1;col<=n;col++)
{
    if(row==1||row==n||col==1||col==n)
    {
       printf("*");
           }
    else 
    printf(" ");
}

printf("\n");

}





}