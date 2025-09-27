

#include <stdio.h>
int main(){

int num1=2;
int num2=1;
int count =0;
int n,lucas=0;
int sum=0;
printf("enter the n: ");
scanf("%d",&n);
printf("numbers of fibonacci series: ");
while(count<=n)

{
    if(count==0)
    {
        lucas=2;

    }
    else if(count==1)
    {
        lucas=1;
    }
    else{
    lucas=num1+num2;
    num1=num2;
    num2=lucas;
    }
    printf("%d ",lucas);

    sum=sum+lucas;
    count++;

}

printf("\nsum of the series: %d",sum);
}
