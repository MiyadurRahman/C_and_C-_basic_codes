#include <stdio.h>

int countdigit( int n  ){
int i=0,rem,divider;
int count=0;
while(n!=0){

rem=n%10;
count++;
n=n/10;

}

return count;

}

int main(){
int n;
scanf(" %d",&n);
int c=countdigit(n);
printf("the answer: %d",c);



}