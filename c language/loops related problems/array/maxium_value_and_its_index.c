#include <stdio.h>
int main(){


int  n;
int marks[10];
scanf("%d",&n);
for (int i=0;i<n;i++)
{scanf("%d",&marks[i]);


}
int index;
int max=marks[0];
for(int i=0;i<n;i++){
if(i%2==0)
 {
    if(max<marks[i])
    max=marks[i];
    index=i;
 }
}
printf("maximum: %d",max);
printf("index position:%d",index);


}