#include  <stdio.h>
int main(){

char str[40];
puts("enter a string: ");
gets(str);
int size=0;
int i=0;
while(str[i]!='\0')
{

size++;
i++;


}
printf("%d",size);



}