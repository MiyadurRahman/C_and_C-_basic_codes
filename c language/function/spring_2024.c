#include <stdio.h>

int factorial(int n)
{
    int fact=1;
for(int i=2;i<=n;i++)
{
    fact=fact* i;
}
return fact;



}
int sum(int a,int b)
{

return a+b;

}

int main(){

int n1,n2;
int n3;
scanf("%d %d %d",&n1,&n2,&n3);
int n4=factorial(n1);
int n5=factorial(n2);
int n6= factorial (n3);

int result= sum(n4+n5,n6);
printf("sum of these factorial of those number:%d ",result);



}


