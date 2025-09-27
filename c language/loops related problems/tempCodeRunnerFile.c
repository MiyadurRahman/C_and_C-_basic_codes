#include <stdio.h>
int main(){

int n;
int positive=0;
int negative=0;
scanf("%d",&n);
for(float i=1.00;i<=n;i=1/(i+2))
{

    if(i>0)
    {
        positive=positive+i;
    }
    else
    negative=negative+i;
}
printf("%d",negative-positive);




}